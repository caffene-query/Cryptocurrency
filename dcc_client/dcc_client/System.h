#ifndef SYSTEM_H
#define SYSTEM_H

#include <array>
#include <boost/process.hpp>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <string>

#if defined(_MSC_VER)
	#include <boost/process/windows.hpp>
#endif

#include "strops.h"

std::string ExecuteCommand(const char* cmd, bool printout = true);
boost::process::child ExecuteAsync(std::string cmd, bool printOutput);
std::string GetStdoutFromCommand(std::string cmd);

template<
	class result_t = std::chrono::milliseconds,
	class clock_t = std::chrono::steady_clock,
	class duration_t = std::chrono::milliseconds>
auto since(std::chrono::time_point<clock_t, duration_t> const& start)
{
	return std::chrono::duration_cast<result_t>(clock_t::now() - start);
}

#endif
