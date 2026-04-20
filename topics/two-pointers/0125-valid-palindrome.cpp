/*
Problem: Valid Palindrome
Link: https://leetcode.com/problems/valid-palindrome/
Difficulty: Easy

Approach:
- Use two pointers (left and right)
- Skip non-alphanumeric characters
- Compare characters in lowercase

Time Complexity: O(n)
Space Complexity: O(1)

Tags: String, Two Pointers
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};