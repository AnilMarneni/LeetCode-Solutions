/*
Problem: Palindrome Partitioning
Link: https://leetcode.com/problems/palindrome-partitioning/
Difficulty: Medium

Approach:
- Use backtracking
- Try all possible partitions
- Check if substring is palindrome before choosing

Time Complexity: Exponential
Space Complexity: O(n)

Tags: String, Backtracking
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    void backtrack(int index, string& s, vector<string>& curr,
                   vector<vector<string>>& result) {
        if (index == s.size()) {
            result.push_back(curr);
            return;
        }

        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                curr.push_back(s.substr(index, i - index + 1));
                backtrack(i + 1, s, curr, result);
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> curr;

        backtrack(0, s, curr, result);
        return result;
    }
};