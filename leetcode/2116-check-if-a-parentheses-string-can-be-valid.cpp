/*
 * 2116. Check if a Parentheses String Can Be Valid
 * Difficulty: Medium
 * 
 * A parentheses string is a
non-empty
non-empty string consisting only of '(' and ')'. It is valid if
any
any of the following conditions is
true
true:
It is ().
It can be written as AB (A concatenated with B), where A and B are valid parentheses strings.
It can be written as (A), where A is a valid parentheses string.
You are given a parentheses string s and a string locked, both of length n. locked is a binary string consisting only of '0's and '1's. For
each
each index i of locked,
If locked[i] is '1', you
cannot
cannot change s[i].
But if locked[i] is '0', you
can
can change s[i] to either '(' or ')'.
Return true if you can make s a valid parentheses string. Otherwise, return false.

**Example 1:**

**Example 1:**
Input: s = "))()))", locked = "010100"
Output: true

Explanation: locked[1] == '1' and locked[3] == '1', so we cannot change s[1] or s[3].
We change s[0] and s[4] to '(' while leaving s[2] and s[5] unchanged to make s valid.

**Example 2:**

**Example 2:**
Input: s = "()()", locked = "0000"
Output: true

Explanation: We do not need to make any changes because s is already valid.

**Example 3:**

**Example 3:**
Input: s = ")", locked = "0"
Output: false

Explanation: locked permits us to change s[0].
Changing s[0] to either '(' or ')' will not make s valid.

**Constraints:**

**Constraints:**
n == s.length == locked.length
1 <= n <= 105
s[i] is either '(' or ')'.
locked[i] is either '0' or '1'.
 */

class Solution {
public:
    bool canBeValid(string s, string l) {
        if (s.size()&1) return 0;
        int b = 0;
        for (int i = 0; i < s.size(); ++i){
            if (l[i] == '0' || s[i] == '(') b++;
            else b--;
            if (b < 0) return 0;
        b = 0;
        for (int i = s.size() - 1; i >= 0; --i){
            if (l[i] == '0' || s[i] == ')') b++;
            else b--;
            if (b < 0) return 0;
    }
        return 1;
        }
        }
};