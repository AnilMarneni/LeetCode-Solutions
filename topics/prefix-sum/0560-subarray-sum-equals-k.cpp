/*
Problem: Subarray Sum Equals K
Link: https://leetcode.com/problems/subarray-sum-equals-k/
Difficulty: Medium

Approach:
- Use prefix sum + hashmap
- If (currentSum - k) exists, it means a subarray sums to k
- Store frequency of prefix sums

Time Complexity: O(n)
Space Complexity: O(n)

Tags: Array, Prefix Sum, HashMap
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;

            if (mp.count(sum - k)) {
                count += mp[sum - k];
            }

            mp[sum]++;
        }

        return count;
    }
};