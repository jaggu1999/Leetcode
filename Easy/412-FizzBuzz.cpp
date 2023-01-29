/**
Question Name: 412. Fizz Buzz
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/fizz-buzz/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 and i % 5 == 0) ans.push_back("FizzBuzz");
            else if (i % 3 == 0) ans.push_back("Fizz");
            else if (i % 5 == 0) ans.push_back("Buzz");
            else ans.push_back(to_string(i));
        }
        return ans;
    }
};