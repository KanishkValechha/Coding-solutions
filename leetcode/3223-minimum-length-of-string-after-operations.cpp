/*
 * 3223. Minimum Length of String After Operations
 * Difficulty: Medium
 * 
 * You are given a string s.
You can perform the following process on s
any
any number of times:
Choose an index i in the string such that there is
at least
at least one character to the left of index i that is equal to s[i], and
at least
at least one character to the right that is also equal to s[i].
Delete the
closest
closest character to the
left
left of index i that is equal to s[i].
Delete the
closest
closest character to the
right
right of index i that is equal to s[i].
Return the
minimum
minimum length of the final string s that you can achieve.

**Example 1:**

**Example 1:**
Input:
Input: s = "abaacbcbb"
Output:
Output: 5

Explanation:

Explanation:
We do the following operations:
Choose index 2, then remove the characters at indices 0 and 3. The resulting string is s = "bacbcbb".
Choose index 3, then remove the characters at indices 0 and 5. The resulting string is s = "acbcb".

**Example 2:**

**Example 2:**
Input:
Input: s = "aa"
Output:
Output: 2

Explanation:

Explanation:
We cannot perform any operations, so we return the length of the original string.

**Constraints:**

**Constraints:**
1 <= s.length <= 2 * 105
s consists only of lowercase English letters.
 */

class Solution {
public:
    int minimumLength(string s) {
        vector<int>f(26,0);
        for(char i:s){
            f[i-'a']++;
            if(f[i-'a']==3){
        }
                f[i-'a']-=2;
            }
    }
        int ans=accumulate(f.begin(),f.end(),0);
        return ans;
};