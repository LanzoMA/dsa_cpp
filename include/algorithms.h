#pragma once

#include <iostream>

class Algorithms
{
public:
    static int linearSearch(const int* array, const size_t arraySize, const int search);
    static int binarySearch(const int* array, const size_t arraySize, const int search);
};
