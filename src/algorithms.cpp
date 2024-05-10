#include "algorithms.h"

#include <iostream>

int Algorithms::linearSearch(const int* array, const size_t arraySize, const int search)
{
    for (size_t index = 0; index < arraySize; index++)
    {
        if (*(array + index) == search)
        { 
            std::cout << search << " is in the array.\n";
            
            return search; 
        }
    }

    std::cout << search << "is not in the array.\n";
    return -1;
}

int Algorithms::binarySearch(const int* array, const size_t arraySize, const int search) {
    std::cout << "Array size: " << arraySize << '\n';

    if (arraySize == 0)
    {
        std::cout << search << " is not in the array.\n";
        return -1;
    }
    
    const int midpoint = (int) arraySize  / 2;
    
    std::cout << "Midpoint: " << midpoint << '\n';

    const int middleValue = *(array + midpoint); 

    std::cout << "Middle value: " << middleValue << "\n\n";

    if (middleValue == search)
    {
        std::cout << search << " is in the array.\n";
        return search;
    }
    
    const size_t newArraySize = arraySize % 2 == 0 ? arraySize - midpoint : arraySize - (midpoint + 1);
    
    int newArray[newArraySize];

    if (middleValue > search)
    {
        std::cout << "Middle value is less.\n";

        for (size_t index = 0; index < newArraySize; index++)
        {
             newArray[index] = *(array + index);
        }
    }

    if (middleValue < search)
    {
        std::cout << "Middle value is greater.\n";

        for (size_t index = 0; index < newArraySize; index++)
        {
             newArray[index] = *(array + midpoint + 1 + index);
        }
    }

    return Algorithms::binarySearch(newArray, newArraySize, search);
}
