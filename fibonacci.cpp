#include <iostream>

using namespace std;

// Find the fibonacci value of a number n
int fibonacci(int n) {
    if (n < 1) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Print a fibonacci sequence of the length provided
void printSequence(int start, int stop) {
    for (int i = start; i <= stop; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << "\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2 || argc > 3) {
        cout << "Usage: " << endl;
        cout << "     " << argv[0] << " [start] [stop]" << endl;
        cout << "  or " << argv[0] << " [stop]\n" << endl;
        cout << "Examples: " << endl;
        cout << "     " << argv[0] << " 1 6" << endl;
        cout << "     " << argv[0] << " 10" << endl;
        return 1;
    }

    int start, stop;
    if (argc == 2) {
        start = 0; // get the second argument provided
        stop = atoi(argv[1]); // get the third argument provided
    } else if (argc == 3) {
        start = atoi(argv[1]);
        stop = atoi(argv[2]);
    }

    // validate input
    if (start < 0 || stop < 0) {
        cout << "Only positive ranges allowed! Exiting...\n\n";
        return 1;
    }

    cout << "-------- Fibonacci Sequence [" << start << "-" << stop << "]--------" << endl;
    printSequence(start, stop);
    return 0;
}
