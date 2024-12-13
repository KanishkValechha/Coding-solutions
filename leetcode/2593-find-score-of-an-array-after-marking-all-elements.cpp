/*
 * 2593. Find Score of an Array After Marking All Elements
 * Difficulty: Medium
 * 
 * You are given an array nums consisting of positive integers.
Starting with score = 0, apply the following algorithm:
Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.
Add the value of the chosen integer to score.
Mark
the chosen element and its two adjacent elements if they exist
the chosen element and its two adjacent elements if they exist.
Repeat until all the array elements are marked.
Return the score you get after applying the above algorithm.

**Example 1:**

**Example 1:**
Input: nums = [2,1,3,4,5,2]
Output: 7

Explanation: We mark the elements as follows:
- 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [2,1,3,4,5,2].
- 2 is the smallest unmarked element, so we mark it and its left adjacent element: [2,1,3,4,5,2].
- 4 is the only remaining unmarked element, so we mark it: [2,1,3,4,5,2].
Our score is 1 + 2 + 4 = 7.

**Example 2:**

**Example 2:**
Input: nums = [2,3,5,1,3,2]
Output: 5

Explanation: We mark the elements as follows:
- 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [2,3,5,1,3,2].
- 2 is the smallest unmarked element, since there are two of them, we choose the left-most one, so we mark the one at index 0 and its right adjacent element: [2,3,5,1,3,2].
- 2 is the only remaining unmarked element, so we mark it: [2,3,5,1,3,2].
Our score is 1 + 2 + 2 = 5.

**Constraints:**

**Constraints:**
1 <= nums.length <= 105
1 <= nums[i] <= 106
 */

class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int,int>>x;
        for(int i=0;i<nums.size();i++){
            x.push_back({nums[i],i});
        }
        sort(x.begin(),x.end());
        for(auto i:x){
            if(nums[i.second]!=-1){
        }
            }
                if(i.second>0){
                score+=i.first;
                    nums[i.second-1]=-1;
                }
                if(i.second<nums.size()-1){
                    nums[i.second+1]=-1;
                }
    }
                nums[i.second]=-1;
        return score;
        long long score=0;
};