/*
Problem: Subsets
Link: https://leetcode.com/problems/subsets/
Difficulty: Medium

Approach:
- Use backtracking
- At each index: include or exclude the element
- Generate all possible subsets

Time Complexity: O(2^n)
Space Complexity: O(n)

Tags: Array, Backtracking
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<int>& curr, vector<vector<int>>& result) {
        result.push_back(curr);

        for (int i = index; i < nums.size(); i++) {
            curr.push_back(nums[i]);
            backtrack(i + 1, nums, curr, result);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> curr;

        backtrack(0, nums, curr, result);
        return result;
    }
};