/*
Problem: Smallest Index With Digit Sum Equal to Index
Link: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
Difficulty: Easy

Approach:
- Iterate through array
- Compute digit sum of each number
- Return first index where digit sum equals index

Time Complexity: O(n * d)
Space Complexity: O(1)

Tags: Array, Math
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digitSum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (digitSum(nums[i]) == i) {
                return i;
            }
        }
        return -1;
    }
};