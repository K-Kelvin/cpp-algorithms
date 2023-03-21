#include <iostream>

using namespace std;

int gcd(int a, int b);

int main(int argc, char* argv[]) {
    int count = (argc - 1);
    if (count < 2) {
        cout << "Usage: " << endl;
        cout << "     " << argv[0] << " [num1] [num2] [..others]\n" << endl;
        cout << "Examples: " << endl;
        cout << "     " << argv[0] << " 6 3" << endl;
        cout << "     " << argv[0] << " 18 6 3" << endl;
        cout << "     " << argv[0] << " 20 18 6 2" << endl;
        return 1;
    }

    int num1 = atoi(argv[1]),
        num2 = atoi(argv[2]),
        result = gcd(num1, num2);

    // calculate and output the gcd for number of values more than 2
    cout << "gcd(" << num1 << ", " << num2;
    for (int i = 3; i <= count; ++i) {
        int n = atoi(argv[i]);
        result = gcd(result, n);
        cout << ", " << n;
    }
    cout << ") = " << result << endl;

    return 0;
}

// Find the G.C.D. of two numbers, a and b
// using euclid's algorithm
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}