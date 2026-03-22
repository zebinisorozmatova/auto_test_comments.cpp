#include <iostream>
#include <cmath>
using namespace std;

// Snippet: Double comparison using epsilon
// Purpose: Avoid floating-point equality issues

bool isEqual(double a, double b, double eps = 1e-9) {
    return abs(a - b) < eps;
}

// Example usage
int main() {
    double x = 0.1 + 0.2;
    double y = 0.3;

    if (isEqual(x, y)) {
        cout << "Considered Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    return 0;
}