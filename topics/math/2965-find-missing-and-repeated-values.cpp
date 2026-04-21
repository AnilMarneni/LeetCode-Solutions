/*
Problem: Find Missing and Repeated Values
Link: https://leetcode.com/problems/find-missing-and-repeated-values/
Difficulty: Easy

Approach:
- Traverse matrix and count frequency of each number
- Identify repeated number (frequency = 2)
- Identify missing number (frequency = 0)

Time Complexity: O(n^2)
Space Complexity: O(n^2)

Tags: Array, Matrix, Math
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n * n + 1, 0);

        for (auto& row : grid) {
            for (int num : row) {
                freq[num]++;
            }
        }

        int repeated = -1, missing = -1;

        for (int i = 1; i <= n * n; i++) {
            if (freq[i] == 2) repeated = i;
            if (freq[i] == 0) missing = i;
        }

        return {repeated, missing};
    }
};