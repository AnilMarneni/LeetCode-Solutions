/*
Problem: Count Primes
Link: https://leetcode.com/problems/count-primes/
Difficulty: Medium

Approach:
- Use Sieve of Eratosthenes
- Mark multiples of each prime starting from i*i
- Count remaining primes less than n

Time Complexity: O(n log log n)
Space Complexity: O(n)

Tags: Math, Sieve
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return count(isPrime.begin(), isPrime.end(), true);
    }
};