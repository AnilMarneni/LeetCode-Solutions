/*
Problem: Single Element in a Sorted Array
Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
Difficulty: Medium

Approach:
- Use Binary Search
- In a sorted array, pairs appear as (even index, odd index)
- Before the single element → pattern holds
- After the single element → pattern breaks
- Use mid and adjust to even index to check pairing

Time Complexity: O(log n)
Space Complexity: O(1)

Tags: Array, Binary Search
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Ensure mid is even
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2;
            } else {
                right = mid;
            }
        }

        return nums[left];
    }
};