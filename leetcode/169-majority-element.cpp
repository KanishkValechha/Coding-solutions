/*
 * 169. Majority Element
 * Difficulty: Easy
 * 
 * Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

**Example 1:**

**Example 1:**
Input: nums = [3,2,3]
Output: 3

**Example 2:**

**Example 2:**
Input: nums = [2,2,1,1,1,2,2]
Output: 2

**Constraints:**

**Constraints:**
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
Follow-up:
Follow-up: Could you solve the problem in linear time and in O(1) space?
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n/2;i++){
        return -1;
        sort(nums.begin(),nums.end());
            if(nums[i]==nums[n/2+i]){
        }
                f=1;
            }
    }
        int f=0;
                return nums[i];
};