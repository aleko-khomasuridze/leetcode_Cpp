/*
 * Roman to Integer Conversion
 *
 * This C++ program defines a Solution class that includes a function to convert Roman numerals to integers.
 * It uses an unordered_map to store the values of Roman numerals. The main logic involves iterating through
 * the input string and adding the corresponding values to calculate the total integer. The program includes
 * a set of test cases to demonstrate the functionality of the Roman to integer conversion.
 *
 * Example Test Cases:
 *   "CCXXVI"       // --> 226
 *   "CCCLXXVII"    // --> 377
 *   "CDLVI"        // --> 456
 *   "CCLVIII"      // --> 258
 *   "DCCLXXXVIII"  // --> 788
 *   "CCCLXXIII"    // --> 373
 *   "CCLXIX"       // --> 269
 *   "CDLXXXIX"     // --> 489
 *   "CXXVI"        // --> 126
 *   "DLXI"         // --> 561
 */


#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    // Function to convert a Roman numeral to an integer
    int romanToInt(string s) {
        
        unordered_map<char, int> roman = {   // Map to store the values of Roman numerals
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
    
        
        int number = 0;   // Variable to store the resulting integer
        uint8_t i = 0;    // Index variable for iterating through the input string
        
        // Iterate through the Roman numeral string
        while (i < s.length()) {
            // Check if the current Roman numeral is smaller than the next one
            // and ensure that we are not at the end of the string
            if (roman[s[i]] < roman[s[i + 1]] && i < s.length() - 1) {
                // If true, subtract the current value from the next value
                // and add the result to the total number
                number += roman[s[i + 1]] - roman[s[i]];
                // Move the index two steps forward
                i += 2;
            } else {
                // If not, add the value of the current Roman numeral to the total number
                // and move the index one step forward
                number += roman[s[i]];
                i++;
            }
        }
        return number;    // Return the final integer
    }
};

// Array of Roman numeral strings to test the conversion
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

int main() {
    
    Solution sol;    // Create an instance of the Solution class
    
    for(const auto& i: numbers){    // Iterate through the test cases and print the results
        cout << i << " --> " << sol.romanToInt(i) << endl;
    }
    
    return 0;    // Return 0 to indicate successful execution
}
