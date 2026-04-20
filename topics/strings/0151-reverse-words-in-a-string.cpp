/*
Problem: Reverse Words in a String
Link: https://leetcode.com/problems/reverse-words-in-a-string/
Difficulty: Medium

Approach:
- Use stringstream to extract words
- Store words and reverse order
- Join with single spaces

Time Complexity: O(n)
Space Complexity: O(n)

Tags: String
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i];
        }

        return result;
    }
};