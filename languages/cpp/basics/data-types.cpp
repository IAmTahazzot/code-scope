#include <iostream>

int main()
{
    /**
     * ----------------------------------------------------------------
     * Data types in C++
     * ----------------------------------------------------------------
     *
     * C++ provides a rich set of built-in as well as user-defined data types.
     * The following are the built-in data types in C++: for more information
     * visit: https://en.cppreference.com/w/cpp/language/types
     *
     * 1. Integer types
     * 2. Floating point types
     * 3. Character types
     * 4. Boolean type
     */

    // Integer types
    short short_number{16};               // size: 2 bytes (16 bits) on most systems
    int integer_number{16 + 32};          // size: 2-4 bytes (16-32 bits) on most systems
    long long_number{32 + 64};            // size: 4-8 bytes (32-64 bits) on most systems
    long long long_long_integer{64 + 64}; // size: 8 bytes (64 bits) on most systems

    // Floating point types
    float float_number{3.14};             // size: 4 bytes (32 bits) on most systems 1.2x10^-38 to 3.4x10^38
    double double_number{3.14};           // size: 8 bytes (64 bits) on most systems 2.3x10^-308 to 1.7x10^308
    long double long_double_number{3.14}; // size: 8-16 bytes (64-128 bits) on most systems 3.4x10^-4932 to 1.1x10^4932

    // Character types
    char char_character{'A'}; // size: 1 byte (8 bits) on most systems

    // Boolean type
    bool boolean_type{true}; // size: 1 byte (8 bits) on most systems

    return 0;
}