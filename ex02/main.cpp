#include "Array.hpp"

int main() {
    // Create an empty array
    Array<int> emptyArray;

    // Create an array of 5 elements initialized by default
    Array<int> initializedArray(5);

    // Copy constructor
    Array<int> copiedArray(initializedArray);

    // Assignment operator
    Array<int> assignedArray;
    assignedArray = initializedArray;

    // Modify assignedArray to test that it's independent from initializedArray
    assignedArray[0] = 100;

    // Output sizes
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;
    std::cout << "Initialized array size: " << initializedArray.size() << std::endl;
    std::cout << "Copied array size: " << copiedArray.size() << std::endl;
    std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
    std::cout << "Assigned array[0] value: " << assignedArray[0] << std::endl;

    return 0;
}
