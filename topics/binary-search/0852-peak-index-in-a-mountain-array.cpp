/*
Problem: Peak Index in a Mountain Array
Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
Difficulty: Medium

Approach:
- Use Binary Search
- In a mountain array:
  if nums[mid] < nums[mid+1] → peak is on right
  else → peak is on left (including mid)
- Narrow down until left == right

Time Complexity: O(log n)
Space Complexity: O(1)

Tags: Array, Binary Search
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};