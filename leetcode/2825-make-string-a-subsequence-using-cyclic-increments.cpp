/*
 * 2825. Make String a Subsequence Using Cyclic Increments
 * Difficulty: Medium
 * 
 * You are given two0-indexedstringsstr1andstr2.In an operation, you select asetof indices instr1, and for each indexiin the set, incrementstr1[i]to the next charactercyclically. That is'a'becomes'b','b'becomes'c', and so on, and'z'becomes'a'.Returntrueif it is possible to makestr2a subsequence ofstr1by performing the operationat most once,andfalseotherwise.Note:A subsequence of a string is a new string that is formed from the original string by deleting some (possibly none) of the characters without disturbing the relative positions of the remaining characters.Example 1:Input:str1 = "abc", str2 = "ad"Output:trueExplanation:Select index 2 in str1.
Increment str1[2] to become 'd'. 
Hence, str1 becomes "abd" and str2 is now a subsequence. Therefore, true is returned.Example 2:Input:str1 = "zc", str2 = "ad"Output:trueExplanation:Select indices 0 and 1 in str1. 
Increment str1[0] to become 'a'. 
Increment str1[1] to become 'd'. 
Hence, str1 becomes "ad" and str2 is now a subsequence. Therefore, true is returned.Example 3:Input:str1 = "ab", str2 = "d"Output:falseExplanation:In this example, it can be shown that it is impossible to make str2 a subsequence of str1 using the operation at most once. 
Therefore, false is returned.Constraints:1 <= str1.length <= 1051 <= str2.length <= 105str1andstr2consist of only lowercase English letters.
 */

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int x=0;
        for(int i=0;i<str1.length();i++){
            if(x<str2.size() && ((str2[x]-str1[i]+26)%26)<=1){
                x++;
            }
        }
    }
        return x==str2.size();
};