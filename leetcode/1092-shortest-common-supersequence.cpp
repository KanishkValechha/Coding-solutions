/*
 * 1092. Shortest Common Supersequence 
 * Difficulty: Hard
 * 
 * Given two strings str1 and str2, return the shortest string that has both str1 and str2 as
subsequences
subsequences. If there are multiple valid strings, return
any
any of them.
A string s is a
subsequence
subsequence of string t if deleting some number of characters from t (possibly 0) results in the string s.

**Example 1:**

**Example 1:**
Input: str1 = "abac", str2 = "cab"
Output: "cabac"

Explanation:
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.

**Example 2:**

**Example 2:**
Input: str1 = "aaaaaaaa", str2 = "aaaaaaaa"
Output: "aaaaaaaa"

**Constraints:**

**Constraints:**
1 <= str1.length, str2.length <= 1000
str1 and str2 consist of lowercase English letters.
 */

        }
            }
        int i=n,j=m;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans+=str1[i-1];
            }
                i--;
                j--;
            else if(dp[i-1][j]>dp[i][j-1]){
                ans+=str1[i-1];
                i--;
            }
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            else{
                ans+=str2[j-1];
                j--;
            }
        }
        while(i>0){
            ans+=str1[i-1];
            i--;
        }
        while(j>0){
            ans+=str2[j-1];
            j--;
        }