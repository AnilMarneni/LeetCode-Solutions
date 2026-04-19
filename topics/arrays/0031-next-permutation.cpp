/*
Problem: Next Permutation
Link: https://leetcode.com/problems/next-permutation/
Difficulty: Medium

Approach:
- Find first decreasing element from right (pivot)
- Find next greater element from right and swap
- Reverse the suffix after pivot

Time Complexity: O(n)
Space Complexity: O(1)

Tags: Array, Two Pointers
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Step 1: find pivot
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // Step 2: find next greater element and swap
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // Step 3: reverse the suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};