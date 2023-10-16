# Roman to Integer Conversion

This C++ program provides a solution for converting Roman numerals to integers. It includes a `Solution` class with a function named `romanToInt` that performs the conversion. The program uses an unordered_map to store the values of Roman numerals and iterates through the input string, applying the necessary logic to calculate the total integer.

## How to Use

1. **Clone the Repository:**
    ```bash
    git clone https://github.com/aleko-khomasuridze/roman-to-integer.git
    cd roman-to-integer
    ```

2. **Compile and Run:**
    ```bash
    g++ roman_to_integer.cpp -o roman_to_integer
    ./roman_to_integer
    ```

3. **Expected Output:**
    The program will print the Roman numerals and their corresponding integer values for a set of test cases.

## Example Test Cases

```cpp
string numbers[] = {
    "CCXXVI",       // --> 226
    "CCCLXXVII",    // --> 377
    "CDLVI",        // --> 456
    "CCLVIII",      // --> 258
    "DCCLXXXVIII",  // --> 788
    "CCCLXXIII",    // --> 373
    "CCLXIX",       // --> 269
    "CDLXXXIX",     // --> 489
    "CXXVI",        // --> 126
    "DLXI"          // --> 561
};



