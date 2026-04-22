/*
Problem: Permutations
Link: https://leetcode.com/problems/permutations/
Difficulty: Medium

Approach:
- Use backtracking with swapping
- Fix one element at a time
- Generate all permutations by swapping

Time Complexity: O(n!)
Space Complexity: O(n)

Tags: Array, Backtracking
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            backtrack(index + 1, nums, result);
            swap(nums[index], nums[i]); // backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(0, nums, result);
        return result;
    }
};