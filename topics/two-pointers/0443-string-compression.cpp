/*
Problem: String Compression
Link: https://leetcode.com/problems/string-compression/
Difficulty: Medium

Approach:
- Use two pointers (read and write)
- Count consecutive characters
- Write character and its count (if >1) in-place

Time Complexity: O(n)
Space Complexity: O(1)

Tags: String, Two Pointers
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0, read = 0;

        while (read < n) {
            char current = chars[read];
            int count = 0;

            while (read < n && chars[read] == current) {
                read++;
                count++;
            }

            chars[write++] = current;

            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};