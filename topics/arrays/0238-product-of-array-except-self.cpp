/*
Problem: Product of Array Except Self
Link: https://leetcode.com/problems/product-of-array-except-self/
Difficulty: Medium

Solved on: 2024-11-28

Approach:
- First pass: store prefix products in result
- Second pass: multiply with suffix products
- Avoid using division

Time Complexity: O(n)
Space Complexity: O(1) (excluding output array)

Tags: Array, Prefix Product, Suffix Product
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};