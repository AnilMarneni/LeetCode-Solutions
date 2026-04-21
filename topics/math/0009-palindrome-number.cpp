/*
Problem: Palindrome Number
Link: https://leetcode.com/problems/palindrome-number/
Difficulty: Easy

Approach:
- Negative numbers are not palindrome
- Reverse half of the number
- Compare first half with reversed half

Time Complexity: O(log n)
Space Complexity: O(1)

Tags: Math
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;

        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return (x == reversed || x == reversed / 10);
    }
};