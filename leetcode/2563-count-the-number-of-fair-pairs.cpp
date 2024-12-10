/*
 * 2563. Count the Number of Fair Pairs
 * Difficulty: Medium
 * 
 * Given a

0-indexed

0-indexed integer array nums of size n and two integers lower and upper, return the number of fair pairs.

A pair (i, j) is fair if:

0 <= i < j < n, and

lower <= nums[i] + nums[j] <= upper

Example 1:

Example 1:

Input: nums = [0,1,7,4,4,5], lower = 3, upper = 6

Output: 6

Explanation: There are 6 fair pairs: (0,3), (0,4), (0,5), (1,3), (1,4), and (1,5).

Example 2:

Example 2:

Input: nums = [1,7,9,2,5], lower = 11, upper = 11

Output: 1

Explanation: There is a single fair pair: (2,3).


**Constraints:**



**Constraints:**


1 <= nums.length <= 105

nums.length == n

-109 <= nums[i] <= 109

-109 <= lower <= upper <= 109
 */

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        return countPairs(nums, upper) - countPairs(nums, lower - 1);
    }

private:
    long long countPairs(vector<int>& nums, int target) {
        long long count = 0;
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            if (nums[left] + nums[right] <= target) {
                count += right - left;
                left++;
            } else {
                right--;
            }
        }
        return count;
    }
};