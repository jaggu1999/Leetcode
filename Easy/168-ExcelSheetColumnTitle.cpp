/**
Question Name: 168. Excel Sheet Column Title
Author: Jagadeesh Kumar Ch
Difficulty: Easy
Question Link: https://leetcode.com/problems/excel-sheet-column-title/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnTitle = "";
        while (columnNumber) {
            columnTitle = char(((columnNumber - 1) % 26) + 'A') + columnTitle;
            columnNumber = (columnNumber - 1) / 26;
        }
        return columnTitle;
    }
};