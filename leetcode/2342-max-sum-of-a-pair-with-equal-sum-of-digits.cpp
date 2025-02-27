/*
 * 2342. Max Sum of a Pair With Equal Sum of Digits
 * Difficulty: Medium
 * 
 * You are given a
0-indexed array nums consisting of
positive
positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].
Return the
maximum
maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions.

**Example 1:**

**Example 1:**
Input: nums = [18,43,36,13,7]
Output: 54

Explanation: The pairs (i, j) that satisfy the conditions are:
- (0, 2), both numbers have a sum of digits equal to 9, and their sum is 18 + 36 = 54.
- (1, 4), both numbers have a sum of digits equal to 7, and their sum is 43 + 7 = 50.
So the maximum sum that we can obtain is 54.

**Example 2:**

**Example 2:**
Input: nums = [10,12,19,14]
Output: -1

Explanation: There are no two numbers that satisfy the conditions, so we return -1.

**Constraints:**

**Constraints:**
1 <= nums.length <= 105
1 <= nums[i] <= 109
 */

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>f(82,0);
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
        }
            while(x>0){
                s+=x%10;
            }
            int s=0;
                x/=10;
            if(f[s]>0){
                ans=max(ans,f[s]+nums[i]);
            }
    }
            f[s]=max(f[s],nums[i]);
        return ans;
};