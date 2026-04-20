/*
Problem: Reverse String
Link: https://leetcode.com/problems/reverse-string/
Difficulty: Easy

Approach:
- Use two pointers (left and right)
- Swap characters while moving inward

Time Complexity: O(n)
Space Complexity: O(1)

Tags: String, Two Pointers
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};