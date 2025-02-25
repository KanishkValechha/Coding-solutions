/*
 * 1524. Number of Sub-arrays With Odd Sum
 * Difficulty: Medium
 * 
 * Given an array of integers arr, return the number of subarrays with an
odd
odd sum.
Since the answer can be very large, return it modulo 109 + 7.

**Example 1:**

**Example 1:**
Input: arr = [1,3,5]
Output: 4

Explanation: All subarrays are [[1],[1,3],[1,3,5],[3],[3,5],[5]]
All sub-arrays sum are [1,4,9,3,8,5].
Odd sums are [1,9,3,5] so the answer is 4.

**Example 2:**

**Example 2:**
Input: arr = [2,4,6]
Output: 0

Explanation: All subarrays are [[2],[2,4],[2,4,6],[4],[4,6],[6]]
All sub-arrays sum are [2,6,12,4,10,6].
All sub-arrays have even sum and the answer is 0.

**Example 3:**

**Example 3:**
Input: arr = [1,2,3,4,5,6,7]
Output: 16

**Constraints:**

**Constraints:**
1 <= arr.length <= 105
1 <= arr[i] <= 100
 */

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD=1e9+7;
        int ans=0,sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
            if(sum&1){
        int o=0,e=1;
                ans+=e;
            }
                o++;
            else{
                ans+=o;
            }
    }
                e++;
        return ans;
            ans%=MOD;
};