# Auto Test Comments
Mini snippet for adding inline test comments to functions.
Helps finding bugs faster in large projects.

Example:
```cpp
int add(int a, int b) {
    // TEST: add(2,3) == 5
    return a + b;
}