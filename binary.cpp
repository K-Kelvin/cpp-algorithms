#include <iostream>
#include <string>

using namespace std;

int binary_search(int array[], int element, int startIndex, int stopIndex);
void print_array(int array[], int length);

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Usage: (provide sorted array)" << endl;
        cout << "     " << argv[0] << " [...numbers] [searchTerms]\n" << endl;
        cout << "Examples: " << endl;
        cout << "     " << argv[0] << " 1 2 3 4 5   2" << endl;
        cout << endl;
        return 1;
    }

    int length = argc - 2;
    int array[length];
    int searchTerm = atoi(argv[argc - 1]); // last item is the searchTerm

    for (int i = 0; i < (argc - 1); ++i) {
        array[i] = atoi(argv[i+1]);
    }

    cout << "---------- Binary Search Algorithm ----------" << endl;

    print_array(array, length);

    int index = binary_search(array, searchTerm, 0, length - 1);
    if (index == -1) { // not found
        cout << "\n" << searchTerm << " not found in the above array.\n" << endl;
        return 0;
    }

    cout << "\nIndex of " << searchTerm << " = " << index << "\n" << endl;
    return 0;
}

// Binary search algorithm
// @arg array[] The array containing elements
// @arg element The item to look for in the array
// @returns The index of the found element in the array,
// otherwise returns -1 if not found
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

void print_array(int array[], int length) {
    cout << "{";
    for (int i = 0; i < length; ++i) {
        cout << array[i];
        if (i != length -1) cout << ", ";
    }
    cout << "}  (length=" << length << ")" << endl;
}
