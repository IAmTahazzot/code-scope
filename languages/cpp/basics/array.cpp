#include <iostream>

int main()
{
    // In C++, Arrays are a collection of elements of the same type stored in contiguous memory locations
    char vowels[]{'a', 'e', 'i', 'o', 'u'};

    std::cout << "The first vowel is: " << vowels[0] << std::endl;
    std::cout << "The last vowel is: " << vowels[4] << std::endl;
    std::cout << "Out of bounds: " << vowels[5] << std::endl; // This will print 0 or garbage value or crash the program depending on the compiler

    // getting the size of the array
    double favorite_numbers[]{7, 2, 3, 100, 70};

    std::cout << favorite_numbers << std::endl;     // This will print the memory address of the array
    std::cout << &favorite_numbers[0] << std::endl; // This will print the memory address of the first element of the array
    std::cout << &favorite_numbers[1] << std::endl; // This will print the memory address of the second element of the array
    std::cout << &favorite_numbers[4] << std::endl; // This will print the memory address of the last element of the array

    std::cout << &favorite_numbers[5] << std::endl; // This will print the memory address of the next memory location after the last element of the array

    // ---------------------------------------------------------
    // Multi-dimensional arrays
    // ---------------------------------------------------------

    // 2D array
    int movie_ratings[3][4]{
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}};

    std::cout
        << "Movie ratings for reviewer #1: "
        << movie_ratings[0][0] << ", "
        << movie_ratings[0][1] << ", "
        << movie_ratings[0][2] << ", "
        << movie_ratings[0][3] << std::endl;

    return 0;
}