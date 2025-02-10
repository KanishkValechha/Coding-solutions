/*
 * 3174. Clear Digits
 * Difficulty: Easy
 * 
 * You are given a string s.
Your task is to remove
all
all digits by doing this operation repeatedly:
Delete the first digit and the
closest
closest non-digit character to its left.
Return the resulting string after removing all digits.

**Example 1:**

**Example 1:**
Input:
Input: s = "abc"
Output:
Output: "abc"

Explanation:

Explanation:
There is no digit in the string.

**Example 2:**

**Example 2:**
Input:
Input: s = "cb34"
Output:
Output: ""

Explanation:

Explanation:
First, we apply the operation on s[2], and s becomes "c4".
Then we apply the operation on s[1], and s becomes "".

**Constraints:**

**Constraints:**
1 <= s.length <= 100
s consists only of lowercase English letters and digits.
The input is generated such that it is possible to delete all digits.
 */

class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(s[i]>='a' && s[i]<='z'){
        }
        int x=0;
                if(x>0){
            }
                    x--;
                }
    }
                else ans+=s[i];
            else x++;
        return ans;
        reverse(ans.begin(),ans.end());
};