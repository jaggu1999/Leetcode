#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (auto ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') stk.push(ch);
            else {
                if (ch == ')' && !stk.empty() && stk.top() == '(') stk.pop();
                else if (ch == '}' && !stk.empty() && stk.top() == '{') stk.pop();
                else if (ch == ']' && !stk.empty() && stk.top() == '[') stk.pop();
                else return false;
            }
        }
        return stk.empty();
    }
};