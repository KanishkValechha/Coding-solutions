/*
 * 916. Word Subsets
 * Difficulty: Medium
 * 
 * You are given two string arrays words1 and words2.
A string b is a
subset
subset of string a if every letter in b occurs in a including multiplicity.
For example, "wrr" is a subset of "warrior" but is not a subset of "world".
A string a from words1 is
universal
universal if for every string b in words2, b is a subset of a.
Return an array of all the
universal
universal strings in words1. You may return the answer in
any order
any order.

**Example 1:**

**Example 1:**
Input: words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","o"]
Output: ["facebook","google","leetcode"]

**Example 2:**

**Example 2:**
Input: words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["l","e"]
Output: ["apple","google","leetcode"]

**Constraints:**

**Constraints:**
1 <= words1.length, words2.length <= 104
1 <= words1[i].length, words2[i].length <= 10
words1[i] and words2[i] consist only of lowercase English letters.
All the strings of words1 are
unique
unique.
 */

        for(auto i:words2){
            vector<int>t(26,0);
        }
            for(char j:i){
                t[j-'a']++;
            }
            for(int j=0;j<26;j++){
                u[j]=max(u[j],t[j]);
            }
        for(auto i:words1){
            vector<int>t(26,0);
            for(char j:i){
                t[j-'a']++;
            }
            for(int j=0;j<26;j++){
                if(t[j]<u[j]){
            }
            int f=1;
                    f=0;
                }
                    break;
            if(f){
                ans.push_back(i);
            }
        }
        return ans;
    }
};