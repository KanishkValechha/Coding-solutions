/*
 * 3105. Longest Strictly Increasing or Strictly Decreasing Subarray
 * Difficulty: Easy
 * 
 * You are given an array of integers nums. Return the length of the
longest
longest subarray
of nums which is either
strictly increasing
strictly increasing
or
strictly decreasing
strictly decreasing
.

**Example 1:**

**Example 1:**
Input:
Input: nums = [1,4,3,3,2]
Output:
Output: 2

Explanation:

Explanation:
The strictly increasing subarrays of nums are [1], [2], [3], [3], [4], and [1,4].
The strictly decreasing subarrays of nums are [1], [2], [3], [3], [4], [3,2], and [4,3].
Hence, we return 2.

**Example 2:**

**Example 2:**
Input:
Input: nums = [3,3,3,3]
Output:
Output: 1

Explanation:

Explanation:
The strictly increasing subarrays of nums are [3], [3], [3], and [3].
The strictly decreasing subarrays of nums are [3], [3], [3], and [3].
Hence, we return 1.

**Example 3:**

**Example 3:**
Input:
Input: nums = [3,2,1]
Output:
Output: 3

Explanation:

Explanation:
The strictly increasing subarrays of nums are [3], [2], and [1].
The strictly decreasing subarrays of nums are [3], [2], [1], [3,2], [2,1], and [3,2,1].
Hence, we return 3.

**Constraints:**

**Constraints:**
1 <= nums.length <= 50
1 <= nums[i] <= 50
 */

                if(nums[i]<nums[i+1]){
                    temp++;
                }
                else if(nums[i]==nums[i+1]){
                    temp=1;
                    f=-1;
                }
                else{
                    f=1;
                    temp=2;
                }
            }
            else{
                if(nums[i]>nums[i+1]){
                    temp++;
                }
                else if(nums[i]==nums[i+1]){
                    temp=1;
                    f=-1;
                }
                else{
                    f=0;
                    temp=2;
                }
            }
        }
        maxa=max(temp,maxa);
        return maxa;
    }