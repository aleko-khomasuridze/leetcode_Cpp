#include<iostream>
#include<stack>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> closingBrackets = {
            {')', '('}, 
            {'}', '{'}, 
            {']', '['}
        };

        for (char c : s) {
            if(c == '(' || c == '{' || c == '[')
                st.push(c);
            else if(st.empty() || st.top() != closingBrackets[c])
                return false;
            else
                st.pop();
        }

        return st.empty();
    }
};

Solution sol;

string tests[] = {
    "()",
    "()[]{}",
    "(]"
};

int main(){
    for(const auto& i: tests){
        cout<<i<<" --> "<<sol.isValid(i)<<endl;
    }
    return 0;
}

