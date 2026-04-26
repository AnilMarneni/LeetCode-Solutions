/*
Problem: Combination Sum
Link: https://leetcode.com/problems/combination-sum/
Difficulty: Medium

Approach:
- Use backtracking
- At each index: choose the element (stay at same index) or skip
- Continue until target becomes 0

Time Complexity: Exponential
Space Complexity: O(target)

Tags: Array, Backtracking
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(int index, vector<int>& candidates, int target,
                   vector<int>& curr, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(curr);
            return;
        }

        if (index >= candidates.size() || target < 0) return;

        // pick
        curr.push_back(candidates[index]);
        backtrack(index, candidates, target - candidates[index], curr, result);
        curr.pop_back();

        // skip
        backtrack(index + 1, candidates, target, curr, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> curr;

        backtrack(0, candidates, target, curr, result);
        return result;
    }
};