#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string alphaNumericStr = "";
        for(auto ch : s){
            if(isalpha(ch) || isdigit(ch)) {
                alphaNumericStr.append(1, tolower(ch));
            }
        }
        if(alphaNumericStr.size() == 0) return true;
        int left = 0, right = alphaNumericStr.size() - 1;
        while(left <= right){
            if(alphaNumericStr[left] != alphaNumericStr[right]) return false;
            else left++, right--;
        }
        return true;
    }
};