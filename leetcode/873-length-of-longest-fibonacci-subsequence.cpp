/*
 * 873. Length of Longest Fibonacci Subsequence
 * Difficulty: Medium
 * 
 * A sequence x1, x2, ..., xn is Fibonacci-like if:
n >= 3
xi + xi+1 == xi+2 for all i + 2 <= n
Given a strictly increasing array arr of positive integers forming a sequence, return the
length
length of the longest Fibonacci-like subsequence of arr. If one does not exist, return 0.
A
subsequence
subsequence is derived from another sequence arr by deleting any number of elements (including none) from arr, without changing the order of the remaining elements. For example, [3, 5, 8] is a subsequence of [3, 4, 5, 6, 7, 8].

**Example 1:**

**Example 1:**
Input: arr = [1,2,3,4,5,6,7,8]
Output: 5

Explanation: The longest subsequence that is fibonacci-like: [1,2,3,5,8].

**Example 2:**

**Example 2:**
Input: arr = [1,3,7,11,12,14,18]
Output: 3

Explanation: The longest subsequence that is fibonacci-like: [1,11,12], [3,11,14] or [7,11,18].

**Constraints:**

**Constraints:**
3 <= arr.length <= 1000
1 <= arr[i] < arr[i + 1] <= 109
 */

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int> f(arr.begin(), arr.end());
        int n = arr.size();
        int maxa = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int prev = arr[i];
                int next = arr[j];
                int l = 2;
                while (f.count(prev + next)) {
                    int t = prev + next;
                    prev = next;
                    next = t;
                    l++;
                    maxa = max(maxa, l);
                }
            }
        }
        return maxa;
    }
};
