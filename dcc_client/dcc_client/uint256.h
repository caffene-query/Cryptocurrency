
#ifndef CPPCOMMON_UINT256_H
#define CPPCOMMON_UINT256_H

#include "uint128.h"

namespace CppCommon {


    class uint256_t
    {
    public:
        uint256_t() noexcept;
        uint256_t(int8_t value) noexcept;
        uint256_t(uint8_t value) noexcept;
        uint256_t(int16_t value) noexcept;
        uint256_t(uint16_t value) noexcept;
        uint256_t(int32_t value) noexcept;
        uint256_t(uint32_t value) noexcept;
        uint256_t(int64_t value) noexcept;
        uint256_t(uint64_t value) noexcept;
        uint256_t(uint128_t value) noexcept;
        template <typename T>
        explicit uint256_t(const T& value) noexcept;
        template <typename TUpper, typename TLower>
        uint256_t(const TUpper& upper, const TLower& lower) noexcept;
        template <typename TUpperUpper, typename TUpperLower, typename TLowerUpper, typename TLowerLower>
        uint256_t(const TUpperUpper& upper_upper, const TUpperLower& upper_lower, const TLowerUpper& lower_upper, const TLowerLower& lower_lower) noexcept;
        uint256_t(const uint256_t&) noexcept = default;
        uint256_t(uint256_t&&) noexcept = default;
        ~uint256_t() noexcept = default;

        template <typename T>
        uint256_t& operator=(const T& value) noexcept;
        uint256_t& operator=(const uint256_t&) noexcept = default;
        uint256_t& operator=(uint256_t&&) noexcept = default;

        // Arithmetic operators
        uint256_t operator+() const noexcept { return *this; }
        uint256_t operator-() const noexcept { return ~*this + 1; }

        uint256_t& operator++() noexcept { return *this += 1; }
        uint256_t operator++(int) noexcept { uint256_t temp(*this); ++*this; return temp; }
        uint256_t& operator--() noexcept { return *this -= 1; }
        uint256_t operator--(int) noexcept { uint256_t temp(*this); --*this; return temp; }

        uint256_t& operator+=(const uint256_t& value) noexcept { return *this = *this + value; }
        uint256_t& operator-=(const uint256_t& value) noexcept { return *this = *this - value; }
        uint256_t& operator*=(const uint256_t& value) noexcept { return *this = *this * value; }
        uint256_t& operator/=(const uint256_t& value) { return *this = *this / value; }
        uint256_t& operator%=(const uint256_t& value) { return *this = *this % value; }

        template <typename T>
        uint256_t& operator+=(const T& value) noexcept { return *this = *this + uint256_t(value); }
        template <typename T>
        uint256_t& operator-=(const T& value) noexcept { return *this = *this - uint256_t(value); }
        template <typename T>
        uint256_t& operator*=(const T& value) noexcept { return *this = *this * uint256_t(value); }
        template <typename T>
        uint256_t& operator/=(const T& value) { return *this = *this / uint256_t(value); }
        template <typename T>
        uint256_t& operator%=(const T& value) { return *this = *this % uint256_t(value); }

        friend uint128_t& operator+=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) + value2).lower(); }
        friend uint128_t& operator-=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) - value2).lower(); }
        friend uint128_t& operator*=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) * value2).lower(); }
        friend uint128_t& operator/=(uint128_t& value1, const uint256_t& value2) { return value1 = (uint256_t(value1) / value2).lower(); }
        friend uint128_t& operator%=(uint128_t& value1, const uint256_t& value2) { return value1 = (uint256_t(value1) % value2).lower(); }

        template <typename T>
        friend T& operator+=(T& value1, const uint256_t& value2) noexcept { return value1 = (T)(uint256_t(value1) + value2); }
        template <typename T>
        friend T& operator-=(T& value1, const uint256_t& value2) noexcept { return value1 = (T)(uint256_t(value1) - value2); }
        template <typename T>
        friend T& operator*=(T& value1, const uint256_t& value2) noexcept { return value1 = static_cast<T>(uint256_t(value1) * value2); }
        template <typename T>
        friend T& operator/=(T& value1, const uint256_t& value2) { return value1 = (T)(uint256_t(value1) / value2); }
        template <typename T>
        friend T& operator%=(T& value1, const uint256_t& value2) { return value1 = (T)(uint256_t(value1) % value2); }

        template <typename T>
        friend uint256_t operator+(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) + value2; }
        template <typename T>
        friend uint256_t operator+(const uint256_t& value1, const T& value2) noexcept { return value1 + uint256_t(value2); }
        friend uint256_t operator+(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) + value2; }
        friend uint256_t operator+(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 + uint256_t(value2); }
        friend uint256_t operator+(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend uint256_t operator-(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) - value2; }
        template <typename T>
        friend uint256_t operator-(const uint256_t& value1, const T& value2) noexcept { return value1 - uint256_t(value2); }
        friend uint256_t operator-(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) - value2; }
        friend uint256_t operator-(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 - uint256_t(value2); }
        friend uint256_t operator-(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend uint256_t operator*(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) * value2; }
        template <typename T>
        friend uint256_t operator*(const uint256_t& value1, const T& value2) noexcept { return value1 * uint256_t(value2); }
        friend uint256_t operator*(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) * value2; }
        friend uint256_t operator*(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 * uint256_t(value2); }
        friend uint256_t operator*(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend uint256_t operator/(const T& value1, const uint256_t& value2) { return uint256_t(value1) / value2; }
        template <typename T>
        friend uint256_t operator/(const uint256_t& value1, const T& value2) { return value1 / uint256_t(value2); }
        friend uint256_t operator/(const uint128_t& value1, const uint256_t& value2) { return uint256_t(value1) / value2; }
        friend uint256_t operator/(const uint256_t& value1, const uint128_t& value2) { return value1 / uint256_t(value2); }
        friend uint256_t operator/(const uint256_t& value1, const uint256_t& value2);

        template <typename T>
        friend uint256_t operator%(const T& value1, const uint256_t& value2) { return uint256_t(value1) % value2; }
        template <typename T>
        friend uint256_t operator%(const uint256_t& value1, const T& value2) { return value1 % uint256_t(value2); }
        friend uint256_t operator%(const uint128_t& value1, const uint256_t& value2) { return uint256_t(value1) % value2; }
        friend uint256_t operator%(const uint256_t& value1, const uint128_t& value2) { return value1 % uint256_t(value2); }
        friend uint256_t operator%(const uint256_t& value1, const uint256_t& value2);

        // Bit operators
        uint256_t operator~() const noexcept { return uint256_t(~_upper, ~_lower); }

        uint256_t& operator&=(const uint256_t& value) noexcept { return *this = *this & value; }
        uint256_t& operator|=(const uint256_t& value) noexcept { return *this = *this | value; }
        uint256_t& operator^=(const uint256_t& value) noexcept { return *this = *this ^ value; }

        template <typename T>
        uint256_t& operator&=(const T& value) noexcept { return *this = *this & uint256_t(value); }
        template <typename T>
        uint256_t& operator|=(const T& value) noexcept { return *this = *this | uint256_t(value); }
        template <typename T>
        uint256_t& operator^=(const T& value) noexcept { return *this = *this ^ uint256_t(value); }

        friend uint128_t& operator&=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) & value2).lower(); }
        friend uint128_t& operator|=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) | value2).lower(); }
        friend uint128_t& operator^=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) ^ value2).lower(); }

        template <typename T>
        friend T& operator&=(T& value1, const uint256_t& value2) noexcept { return value1 = (T)(uint256_t(value1) & value2); }
        template <typename T>
        friend T& operator|=(T& value1, const uint256_t& value2) noexcept { return value1 = (T)(uint256_t(value1) | value2); }
        template <typename T>
        friend T& operator^=(T& value1, const uint256_t& value2) noexcept { return value1 = (T)(uint256_t(value1) ^ value2); }

        template <typename T>
        friend uint256_t operator&(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) & value2; }
        template <typename T>
        friend uint256_t operator&(const uint256_t& value1, const T& value2) noexcept { return value1 & uint256_t(value2); }
        friend uint256_t operator&(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) & value2; }
        friend uint256_t operator&(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 & uint256_t(value2); }
        friend uint256_t operator&(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend uint256_t operator|(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) | value2; }
        template <typename T>
        friend uint256_t operator|(const uint256_t& value1, const T& value2) noexcept { return value1 | uint256_t(value2); }
        friend uint256_t operator|(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) | value2; }
        friend uint256_t operator|(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 | uint256_t(value2); }
        friend uint256_t operator|(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend uint256_t operator^(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) ^ value2; }
        template <typename T>
        friend uint256_t operator^(const uint256_t& value1, const T& value2) noexcept { return value1 ^ uint256_t(value2); }
        friend uint256_t operator^(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) ^ value2; }
        friend uint256_t operator^(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 ^ uint256_t(value2); }
        friend uint256_t operator^(const uint256_t& value1, const uint256_t& value2) noexcept;

        // Comparison operators
        template <typename T>
        friend bool operator==(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) == value2; }
        template <typename T>
        friend bool operator==(const uint256_t& value1, const T& value2) noexcept { return value1 == uint256_t(value2); }
        friend bool operator==(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) == value2; }
        friend bool operator==(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 == uint256_t(value2); }
        friend bool operator==(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend bool operator!=(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) != value2; }
        template <typename T>
        friend bool operator!=(const uint256_t& value1, const T& value2) noexcept { return value1 != uint256_t(value2); }
        friend bool operator!=(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) != value2; }
        friend bool operator!=(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 != uint256_t(value2); }
        friend bool operator!=(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend bool operator<(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) < value2; }
        template <typename T>
        friend bool operator<(const uint256_t& value1, const T& value2) noexcept { return value1 < uint256_t(value2); }
        friend bool operator<(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) < value2; }
        friend bool operator<(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 < uint256_t(value2); }
        friend bool operator<(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend bool operator>(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) > value2; }
        template <typename T>
        friend bool operator>(const uint256_t& value1, const T& value2) noexcept { return value1 > uint256_t(value2); }
        friend bool operator>(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) > value2; }
        friend bool operator>(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 > uint256_t(value2); }
        friend bool operator>(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend bool operator<=(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) <= value2; }
        template <typename T>
        friend bool operator<=(const uint256_t& value1, const T& value2) noexcept { return value1 <= uint256_t(value2); }
        friend bool operator<=(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) <= value2; }
        friend bool operator<=(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 <= uint256_t(value2); }
        friend bool operator<=(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend bool operator>=(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) >= value2; }
        template <typename T>
        friend bool operator>=(const uint256_t& value1, const T& value2) noexcept { return value1 >= uint256_t(value2); }
        friend bool operator>=(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) >= value2; }
        friend bool operator>=(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 >= uint256_t(value2); }
        friend bool operator>=(const uint256_t& value1, const uint256_t& value2) noexcept;

        // Logical operators
        bool operator!() const noexcept { return !(bool)(_upper | _lower); }

        template <typename T>
        friend bool operator&&(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) && value2; }
        template <typename T>
        friend bool operator&&(const uint256_t& value1, const T& value2) noexcept { return value1 && uint256_t(value2); }
        friend bool operator&&(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) && value2; }
        friend bool operator&&(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 && uint256_t(value2); }
        friend bool operator&&(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend bool operator||(const T& value1, const uint256_t& value2) noexcept { return uint256_t(value1) || value2; }
        template <typename T>
        friend bool operator||(const uint256_t& value1, const T& value2) noexcept { return value1 || uint256_t(value2); }
        friend bool operator||(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) || value2; }
        friend bool operator||(const uint256_t& value1, const uint128_t& value2) noexcept { return value1 || uint256_t(value2); }
        friend bool operator||(const uint256_t& value1, const uint256_t& value2) noexcept;

        // Shift operators
        uint256_t& operator<<=(const uint256_t& value) noexcept { return *this = *this << value; }
        uint256_t& operator>>=(const uint256_t& value) noexcept { return *this = *this >> value; }

        template <typename T>
        uint256_t& operator<<=(const T& value) noexcept { return *this = *this << uint256_t(value); }
        template <typename T>
        friend T& operator<<=(T& value1, const uint256_t& value2) noexcept { return value1 = (T)(uint256_t(value1) << value2); }

        friend uint128_t& operator<<=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) << value2).lower(); }
        friend uint128_t& operator>>=(uint128_t& value1, const uint256_t& value2) noexcept { return value1 = (uint256_t(value1) >> value2).lower(); }

        template <typename T>
        uint256_t& operator>>=(const T& value) noexcept { return *this = *this >> uint256_t(value); }
        template <typename T>
        friend T& operator>>=(T& value1, const uint256_t& value2) noexcept { return value1 = (T)(uint256_t(value1) >> value2); }

        template <typename T>
        friend uint256_t operator<<(const uint256_t& value1, const T& value2) noexcept { return value1 << uint256_t(value2); }
        friend uint256_t operator<<(bool value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(int8_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(int16_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(int32_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(int64_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(uint8_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(uint16_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(uint32_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(uint64_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) << value2; }
        friend uint256_t operator<<(const uint256_t& value1, const uint256_t& value2) noexcept;

        template <typename T>
        friend uint256_t operator>>(const uint256_t& value1, const T& value2) noexcept { return value1 >> uint256_t(value2); }
        friend uint256_t operator>>(bool value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(int8_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(int16_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(int32_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(int64_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(uint8_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(uint16_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(uint32_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(uint64_t value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(const uint128_t& value1, const uint256_t& value2) noexcept { return uint256_t(value1) >> value2; }
        friend uint256_t operator>>(const uint256_t& value1, const uint256_t& value2) noexcept;

        // Type cast
        operator bool() const noexcept { return (bool)(_upper | _lower); }
        operator uint8_t() const noexcept { return (uint8_t)_lower; }
        operator uint16_t() const noexcept { return (uint16_t)_lower; }
        operator uint32_t() const noexcept { return (uint32_t)_lower; }
        operator uint64_t() const noexcept { return (uint64_t)_lower; }
        operator uint128_t() const noexcept { return _lower; }

        uint128_t upper() const noexcept { return _upper; }
        uint128_t lower() const noexcept { return _lower; }

        size_t bits() const noexcept;


        std::string string(size_t base = 10, size_t length = 0) const;

        std::wstring wstring(size_t base = 10, size_t length = 0) const;


        static std::pair<uint256_t, uint256_t> divmod(const uint256_t& x, const uint256_t& y);

        friend std::istream& operator>>(std::istream& is, uint256_t& value)
        {
            is >> value._upper >> value._lower; return is;
        }
        friend std::wistream& operator>>(std::wistream& is, uint256_t& value)
        {
            is >> value._upper >> value._lower; return is;
        }
        friend std::ostream& operator<<(std::ostream& os, const uint256_t& value);
        friend std::wostream& operator<<(std::wostream& os, const uint256_t& value);

        void swap(uint256_t& value) noexcept;
        friend void swap(uint256_t& value1, uint256_t& value2) noexcept;

    private:
        uint128_t _upper;
        uint128_t _lower;
    };

} // namespace CppCommon

#include "uint256.inl"

#endif // CPPCOMMON_UINT256_H