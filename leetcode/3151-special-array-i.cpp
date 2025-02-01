/*
 * 3151. Special Array I
 * Difficulty: Easy
 * 
 * An array is considered
special
special if every pair of its adjacent elements contains two numbers with different parity.
You are given an array of integers nums. Return true if nums is a
special
special array, otherwise, return false.

**Example 1:**

**Example 1:**
Input:
Input: nums = [1]
Output:
Output: true

Explanation:

Explanation:
There is only one element. So the answer is true.

**Example 2:**

**Example 2:**
Input:
Input: nums = [2,1,4]
Output:
Output: true

Explanation:

Explanation:
There is only two pairs: (2,1) and (1,4), and both of them contain numbers with different parity. So the answer is true.

**Example 3:**

**Example 3:**
Input:
Input: nums = [4,3,1,6]
Output:
Output: false

Explanation:

Explanation:
nums[1] and nums[2] are both odd. So the answer is false.

**Constraints:**

**Constraints:**
1 <= nums.length <= 100
1 <= nums[i] <= 100
 */

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]&1 && nums[i+1]&1) return false;
            if(nums[i]%2==0 && nums[i+1]%2==0) return false;
        }
        return true;
    }
};