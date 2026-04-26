/*
Problem: Check Knight Tour Configuration
Link: https://leetcode.com/problems/check-knight-tour-configuration/
Difficulty: Medium

Approach:
- Start from (0,0)
- At each step, find next move (k+1)
- Check if it's a valid knight move
- Repeat until all cells are visited

Time Complexity: O(n^2)
Space Complexity: O(1)

Tags: Matrix, Simulation
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidMove(int r1, int c1, int r2, int c2) {
        int dr = abs(r1 - r2);
        int dc = abs(c1 - c2);
        return (dr == 2 && dc == 1) || (dr == 1 && dc == 2);
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0] != 0) return false;

        vector<pair<int,int>> pos(n * n);

        // Store positions of each number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                pos[grid[i][j]] = {i, j};
            }
        }

        // Check knight moves in order
        for (int i = 1; i < n * n; i++) {
            auto [r1, c1] = pos[i - 1];
            auto [r2, c2] = pos[i];

            if (!isValidMove(r1, c1, r2, c2)) {
                return false;
            }
        }

        return true;
    }
};