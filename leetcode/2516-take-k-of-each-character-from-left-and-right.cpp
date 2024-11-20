/*
 * 2516. Take K of Each Character From Left and Right
 * Difficulty: Medium
 * 
 * You are given a stringsconsisting of the characters'a','b', and'c'and a non-negative integerk. Each minute, you may take either theleftmostcharacter ofs, or therightmostcharacter ofs.Returntheminimumnumber of minutes needed for you to takeat leastkof each character, or return-1if it is not possible to takekof each character.Example 1:Input:s = "aabaaaacaabc", k = 2Output:8Explanation:Take three characters from the left of s. You now have two 'a' characters, and one 'b' character.
Take five characters from the right of s. You now have four 'a' characters, two 'b' characters, and two 'c' characters.
A total of 3 + 5 = 8 minutes is needed.
It can be proven that 8 is the minimum number of minutes needed.Example 2:Input:s = "a", k = 1Output:-1Explanation:It is not possible to take one 'b' or 'c' so return -1.Constraints:1 <= s.length <= 105sconsists of only the letters'a','b', and'c'.0 <= k <= s.length
 */

            c[i-'a']++;
        }
        if(c[0]<k || c[1]<k || c[2]<k) return -1;
        int i=0,j=0;
        while(i<n){
            c[s[i]-'a']--;
            while(c[0]<k||c[1]<k||c[2]<k && j<i){
                c[s[j]-'a']++;
            }
                j++;
        int n=s.size();
        vector<int>c(3,0);
·‌·‌·‌·‌·‌·‌·‌·‌for(auto·‌i:s){
public:
    int takeCharacters(string s, int k) {
        int ans=0;
class Solution {
        if(c[0]+c[1]+c[2]==(k*3)) return n;