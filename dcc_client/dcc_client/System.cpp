
#include "System.h"


// Execute a command in the main thread and print the output
std::string ExecuteCommand(const char* cmd, bool printout)
{
#if defined(_MSC_VER)
	std::array<char, 128> buffer;
	std::string result;
	std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
	if (!pipe) {
		throw std::runtime_error("_popen() failed!");
	}
	while (fgets(buffer.data(), (int)(buffer.size()), pipe.get()) != nullptr) {
		result += buffer.data();
		if (printout)
			std::cout << buffer.data();
	}
#else
	system(cmd);
#endif


	return "";
}

std::string GetStdoutFromCommand(std::string cmd)
{
	std::string data;
	FILE* stream;
	const int max_buffer = 256;
	char buffer[max_buffer];
	cmd.append(" 2>&1");
	stream = popen(cmd.c_str(), "r");
	if (stream) {
		while (!feof(stream)) {
			if (fgets(buffer, max_buffer, stream) != NULL)
				data.append(buffer);
		}
		pclose(stream);
	}
	return data;
}

// Execute a process in an asynchronous background thread
boost::process::child ExecuteAsync(std::string cmd, bool printOutput)
{
	try {
		namespace bp = boost::process;
		std::vector<std::string> splitCommand = SplitString(cmd, " ");
		std::string command = splitCommand[0];
		std::string args;
		for (int i = 1; i < sizeof(splitCommand) / sizeof(splitCommand[0]); i++) {
			args += splitCommand[i] + " ";
		}

#if defined(_MSC_VER)
		bp::child c(cmd, ::boost::process::windows::create_no_window);
#else
		bp::child c(cmd, bp::std_out > bp::null);
#endif

		return c;
	}
	catch (const std::exception&) {
		return boost::process::child();
	}

	return boost::process::child();
}
