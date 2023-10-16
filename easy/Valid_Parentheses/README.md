# Valid Parentheses Checker

This C++ program provides a solution for checking the validity of parentheses in a given string. It defines a `Solution` class with a function named `isValid` that uses a stack to keep track of opening brackets and an unordered_map to store the corresponding closing brackets for validation.

## How to Use

1. **Clone the Repository:**
    ```bash
    git clone https://github.com/aleko-khomasuridze/valid-parentheses-checker.git
    cd valid-parentheses-checker
    ```

2. **Compile and Run:**
    ```bash
    g++ valid_parentheses_checker.cpp -o valid_parentheses_checker
    ./valid_parentheses_checker
    ```

3. **Expected Output:**
    The program will print the test strings and indicate whether the parentheses are valid.

## Example Test Cases

```cpp
string tests[] = {
    "()",
    "()[]{}",
    "(]"
};

