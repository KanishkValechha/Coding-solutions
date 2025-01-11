/*
 * 1400. Construct K Palindrome Strings
 * Difficulty: Medium
 * 
 * Given a string s and an integer k, return true if you can use all the characters in s to construct k palindrome strings or false otherwise.

**Example 1:**

**Example 1:**
Input: s = "annabelle", k = 2
Output: true

Explanation: You can construct two palindromes using all characters in s.
Some possible constructions "anna" + "elble", "anbna" + "elle", "anellena" + "b"

**Example 2:**

**Example 2:**
Input: s = "leetcode", k = 3
Output: false

Explanation: It is impossible to construct 3 palindromes using all the characters of s.

**Example 3:**

**Example 3:**
Input: s = "true", k = 4
Output: true

Explanation: The only possible solution is to put each character in a separate string.

**Constraints:**

**Constraints:**
1 <= s.length <= 105
s consists of lowercase English letters.
1 <= k <= 105
 */

class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        vector<int>f(26,0);
        for(char i:s){
            f[i-'a']++;
        }
        int odd=0;
        for(int i:f){
            if(i&1){
        }
                odd++;
            }
    }
        return odd<=k && k<=n;
};