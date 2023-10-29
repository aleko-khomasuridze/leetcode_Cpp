#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return ""; // Return an empty string if the input vector is empty.
        }

        string pref = ""; // Initialize an empty string to store the common prefix.

        for (int i = 0; i < strs[0].length(); i++) {
            char currentChar = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    return pref; // Return the common prefix found so far.
                }
            }

            pref += currentChar; // If all characters match, add the character to the common prefix.
        }

        return pref; // Return the final common prefix.
    }
};

int main() {
    // Create a Solution object
    Solution solution;

    // Test cases
    vector<string> test1 = { "flower", "flow", "flight" };
    cout << "Longest Common Prefix for Test Case 1: " << solution.longestCommonPrefix(test1) << endl;

    vector<string> test2 = { "dog", "car", "race" };
    cout << "Longest Common Prefix for Test Case 2: " << solution.longestCommonPrefix(test2) << endl;

    vector<string> test3 = { "apple", "banana", "cherry" };
    cout << "Longest Common Prefix for Test Case 3: " << solution.longestCommonPrefix(test3) << endl;

    return 0;
}
