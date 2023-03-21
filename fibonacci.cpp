#include <iostream>

using namespace std;

// Find the fibonacci value of a number n
int fibonacci(int n) {
    if (n < 1) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Print a fibonacci sequence of the length provided
void printSequence(int noOfTerms) {
    for (int i = 1; i <= noOfTerms; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << "\n";
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << endl;
        cout << "     " << argv[0] << " [length]\n" << endl;
        cout << "Examples: " << endl;
        cout << "     " << argv[0] << " 6" << endl;
        cout << "     " << argv[0] << " 10" << endl;
        return 1;
    }

    int length = atoi(argv[1]); // get the second argument provided

    cout << "-------- Fibonacci Sequence [length=" << length << "]--------" << endl;
    printSequence(length);
    return 0;
}
