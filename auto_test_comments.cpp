#include <iostream>
using namespace std;

// Snippet: Inline test comments
// Purpose: Quickly mark expected results for functions

int add(int a, int b) {
    // TEST: add(2,3) == 5
    return a + b;
}

int main() {
    cout << add(2,3) << endl; // Output: 5
    return 0;
}