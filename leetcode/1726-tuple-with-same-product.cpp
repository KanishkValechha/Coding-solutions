/*
 * 1726. Tuple with Same Product
 * Difficulty: Medium
 * 
 * Given an array nums of
distinct
distinct positive integers, return the number of tuples (a, b, c, d) such that a * b = c * d where a, b, c, and d are elements of nums, and a != b != c != d.

**Example 1:**

**Example 1:**
Input: nums = [2,3,4,6]
Output: 8

Explanation: There are 8 valid tuples:
(2,6,3,4) , (2,6,4,3) , (6,2,3,4) , (6,2,4,3)
(3,4,2,6) , (4,3,2,6) , (3,4,6,2) , (4,3,6,2)

**Example 2:**

**Example 2:**
Input: nums = [1,2,4,5,10]
Output: 16

Explanation: There are 16 valid tuples:
(1,10,2,5) , (1,10,5,2) , (10,1,2,5) , (10,1,5,2)
(2,5,1,10) , (2,5,10,1) , (5,2,1,10) , (5,2,10,1)
(2,10,4,5) , (2,10,5,4) , (10,2,4,5) , (10,2,5,4)
(4,5,2,10) , (4,5,10,2) , (5,4,2,10) , (5,4,10,2)

**Constraints:**

**Constraints:**
1 <= nums.length <= 1000
1 <= nums[i] <= 104
All elements in nums are
distinct
distinct.
 */

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>x;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
        }
                x[nums[i]*nums[j]]++;
            }
        return ans;
    }
                ans+=8*x[nums[i]*nums[j]];
        int ans=0;
};