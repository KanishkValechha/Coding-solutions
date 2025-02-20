/*
 * 1980. Find Unique Binary String
 * Difficulty: Medium
 * 
 * Given an array of strings nums containing n
unique
unique binary strings each of length n, return a binary string of length n that
does not appear
does not appear in nums. If there are multiple answers, you may return
any
any of them.

**Example 1:**

**Example 1:**
Input: nums = ["01","10"]
Output: "11"

Explanation: "11" does not appear in nums. "00" would also be correct.

**Example 2:**

**Example 2:**
Input: nums = ["00","01"]
Output: "11"

Explanation: "11" does not appear in nums. "10" would also be correct.

**Example 3:**

**Example 3:**
Input: nums = ["111","011","001"]
Output: "101"

Explanation: "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.

**Constraints:**

**Constraints:**
n == nums.length
1 <= n <= 16
nums[i].length == n
nums[i] is either '0' or '1'.
All the strings of nums are
unique
unique.
 */

class Solution {
public:
    void func(int i,string s,vector<string>&x,int n){
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string>x;
        int n=nums.size();
        func(0,"",x,n);
        if(s.size()==n){
        func(i+1,s+'0',x,n);
            x.push_back(s);
        }
            return;
        func(i+1,s+'1',x,n);
        for(auto i:x){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
        }
                return i;
            }
    }
        return "";
};