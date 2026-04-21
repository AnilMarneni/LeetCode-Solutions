/*
Problem: Spiral Matrix
Link: https://leetcode.com/problems/spiral-matrix/
Difficulty: Medium

Approach:
- Use four boundaries: top, bottom, left, right
- Traverse in order: left→right, top→bottom, right→left, bottom→top
- Shrink boundaries after each step

Time Complexity: O(m * n)
Space Complexity: O(1) (excluding output)

Tags: Array, Matrix
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        vector<int> result;

        while (top <= bottom && left <= right) {

            // left → right
            for (int j = left; j <= right; j++) {
                result.push_back(matrix[top][j]);
            }
            top++;

            // top → bottom
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;

            // right → left
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // bottom → top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};