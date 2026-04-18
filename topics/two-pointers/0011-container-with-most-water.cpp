/*
Problem: Container With Most Water
Link: https://leetcode.com/problems/container-with-most-water/
Difficulty: Medium

Approach:
- Use two pointers (left = 0, right = n-1)
- Calculate area = min(height[left], height[right]) * width
- Move the pointer with smaller height inward
  (because moving the taller one won’t increase area)

Time Complexity: O(n)
Space Complexity: O(1)

Tags: Array, Two Pointers, Greedy
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            maxArea = max(maxArea, h * w);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};