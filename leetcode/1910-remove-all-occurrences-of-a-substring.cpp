/*
 * 1910. Remove All Occurrences of a Substring
 * Difficulty: Medium
 * 
 * Given two strings s and part, perform the following operation on s until
all
all occurrences of the substring part are removed:
Find the
leftmost
leftmost occurrence of the substring part and
remove
remove it from s.
Return s after removing all occurrences of part.
A
substring
substring is a contiguous sequence of characters in a string.

**Example 1:**

**Example 1:**
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"

Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".

**Example 2:**

**Example 2:**
Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"

Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".

**Constraints:**

**Constraints:**
1 <= s.length <= 1000
1 <= part.length <= 1000
s​​​​​​ and part consists of lowercase English letters.
 */

class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        for (char i : s) {
            ans.push_back(i);
            if (ans.size() >= part.size() && ans.substr(ans.size() - part.size()) == part) {
};
                ans.erase(ans.end() - part.size(), ans.end());
            }
        }
        return ans;
    }
