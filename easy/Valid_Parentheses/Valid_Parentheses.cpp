/*
 * Valid Parentheses Checker
 *
 * This C++ program defines a Solution class with a function to check the validity of parentheses in a given string.
 * It uses a stack to keep track of opening brackets and an unordered_map to store the corresponding closing brackets
 * for validation. The main function demonstrates the usage of the Solution class by testing it on a set of example
 * strings and printing the results.
 *
 * Example Test Cases:
 *   "()"
 *   "()[]{}"
 *   "(]"
 */


#include<iostream>
#include<stack>
#include<unordered_map>

using namespace std;

// The Solution class encapsulates the logic for validating parentheses in a string.
class Solution {
public:
    // Function to check if the input string has valid parentheses
    bool isValid(string s)
    {
        // Stack to keep track of opening brackets
        stack<char> st;
        // Map to store the corresponding closing brackets for validation
        unordered_map<char, char> closingBrackets = {
            {')', '('}, 
            {'}', '{'}, 
            {']', '['}
        };

        // Iterate through each character in the string
        for (char c : s) {
            if(c == '(' || c == '{' || c == '[')
                st.push(c); // Push opening brackets onto the stack
            else if(st.empty() || st.top() != closingBrackets[c])
                return false; // If stack is empty or top of stack doesn't match the closing bracket, it's invalid
            else
                st.pop(); // Pop the matching opening bracket from the stack
        }

        // The string is valid if the stack is empty at the end
        return st.empty();
    }
};

// Create an instance of the Solution class
Solution sol;

// Array of test cases
string tests[] = {
    "()",
    "()[]{}",
    "(]"
};

// The main function demonstrates the usage of the Solution class
int main(){
    // Iterate through the test cases and print the results
    for(const auto& i: tests){
        cout << i << " --> " << sol.isValid(i) << endl;
    }
    
    // Return 0 to indicate successful execution
    return 0;
}
