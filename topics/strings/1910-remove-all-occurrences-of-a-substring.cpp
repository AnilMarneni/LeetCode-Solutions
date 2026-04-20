/*
Problem: Remove All Occurrences of a Substring
Link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
Difficulty: Medium

Approach:
- Iterate through string and build result
- Append characters one by one
- Whenever the end matches 'part', remove it
- Works like a stack (build + pop)

Time Complexity: O(n * m)
Space Complexity: O(n)

Tags: String, Stack
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        string result;

        for (char c : s) {
            result.push_back(c);

            if (result.size() >= part.size() &&
                result.substr(result.size() - part.size()) == part) {
                result.erase(result.size() - part.size());
            }
        }

        return result;
    }
};