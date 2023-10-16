#include<iostream>
#include<unordered_map>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
    
        int number = 0;
        uint8_t i = 0;
        while (i < s.length()) {
            
            if (roman[s[i]] < roman[s[i + 1]] && i < s.length() - 1) {
                number += roman[s[i + 1]] - roman[s[i]];
                i+=2;
            }
            else {
                number += roman[s[i]];
                i++;
            }
            
        }
        return number;
    }
};

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
    Solution sol;

    for(const auto& i: numbers){
        cout<<i<<" --> "<< sol.romanToInt(i)<<endl;
    }
    
    return 0;
}

