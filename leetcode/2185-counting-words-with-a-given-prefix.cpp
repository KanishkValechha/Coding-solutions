/*
 * 2185. Counting Words With a Given Prefix
 * Difficulty: Easy
 * 
 * You are given an array of strings words and a string pref.
Return the number of strings in words that contain pref as a
prefix
prefix.
A
prefix
prefix of a string s is any leading contiguous substring of s.

**Example 1:**

**Example 1:**
Input: words = ["pay","attention","practice","attend"], pref = "at"
Output: 2

Explanation: The 2 strings that contain "at" as a prefix are: "attention" and "attend".

**Example 2:**

**Example 2:**
Input: words = ["leetcode","win","loops","success"], pref = "code"
Output: 0

Explanation: There are no strings that contain "code" as a prefix.

**Constraints:**

**Constraints:**
1 <= words.length <= 100
1 <= words[i].length, pref.length <= 100
words[i] and pref consist of lowercase English letters.
 */

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int m=pref.size();
        int ans=0;
        for(int i=0;i<n;i++){
        return ans;
            for(int j=0;j<m;j++){
        }
                if(words[i][j]!=pref[j]){
            }
            int f=1;
                    f=0;
                }
                    break;
            if(f) ans++;
    }
};