/*
Problem: Binary Search
Link: https://leetcode.com/problems/binary-search/
Difficulty: Easy

Approach:
- Use classic binary search
- Compare mid with target and adjust range

Time Complexity: O(log n)
Space Complexity: O(1)

Tags: Array, Binary Search
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }

        return -1;
    }
};