/*
Problem: Single Number
Link: https://leetcode.com/problems/single-number/
Difficulty: Easy

Approach:
- Use XOR operation
- a ^ a = 0 and a ^ 0 = a
- XOR all elements to get the single number

Time Complexity: O(n)
Space Complexity: O(1)

Tags: Array, Bit Manipulation
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int num : nums) {
            result ^= num;
        }

        return result;
    }
};