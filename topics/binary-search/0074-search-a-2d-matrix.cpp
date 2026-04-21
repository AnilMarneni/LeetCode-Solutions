/*
Problem: Search a 2D Matrix
Link: https://leetcode.com/problems/search-a-2d-matrix/
Difficulty: Medium

Approach:
- Treat matrix as a flattened sorted array
- Apply binary search on indices
- Convert mid index to (row, col)

Time Complexity: O(log (m * n))
Space Complexity: O(1)

Tags: Array, Binary Search
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0, right = m * n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            int row = mid / n;
            int col = mid % n;

            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] < target) left = mid + 1;
            else right = mid - 1;
        }

        return false;
    }
};