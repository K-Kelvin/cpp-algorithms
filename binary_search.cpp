#include <iostream>
// #include "sorts/quick_sort.h"

using namespace std;

int binary_search(int array[], int element, int startIndex, int stopIndex);

int main() {
    // int array[] = {9,5,13,3,8,7,2,12,6,10,4,11,1};
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int length = 13;

    cout << "Binary Search Algorithm" << endl;

    int searchTerm = 10;
    // insertion_sort(array, length);
    // quick_sort(array, length);
    cout << "Index of " << searchTerm << " = " << binary_search(array, searchTerm, 0, length - 1) << endl;

    return 0;
}

/// Binary search algorithm
/// @arg array[] The array containing elements
/// @arg element The item to look for in the array
/// @returns The index of the found element in the array,
/// otherwise returns -1 if not found
int binary_search(int array[], int element, int startIndex, int stopIndex){
    int midIndex = startIndex + (stopIndex - startIndex) / 2;

    if (startIndex > stopIndex) return -1; // not found

    int pivot = array[midIndex]; // element in the middle of the array

    if (element == pivot) return midIndex;
    // look for the element on the left side of the pivot
    else if (element < pivot) return binary_search(array, element, startIndex, midIndex - 1);
    // look for the element on the right side of the pivot
    else return binary_search(array, element, midIndex + 1, stopIndex);
}
