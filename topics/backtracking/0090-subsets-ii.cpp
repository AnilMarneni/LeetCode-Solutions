/*
Problem: Subsets II
Link: https://leetcode.com/problems/subsets-ii/
Difficulty: Medium

Approach:
- Sort the array
- Use backtracking
- Skip duplicates by checking previous element

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
            if (i > index && nums[i] == nums[i - 1]) continue;

            curr.push_back(nums[i]);
            backtrack(i + 1, nums, curr, result);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        vector<int> curr;

        backtrack(0, nums, curr, result);
        return result;
    }
};