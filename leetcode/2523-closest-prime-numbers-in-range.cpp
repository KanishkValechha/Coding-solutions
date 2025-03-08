/*
 * 2523. Closest Prime Numbers in Range
 * Difficulty: Medium
 * 
 * Given two positive integers left and right, find the two integers num1 and num2 such that:
left <= num1 < num2 <= right .
Both num1 and num2 are prime numbers.
num2 - num1 is the
minimum
minimum amongst all other pairs satisfying the above conditions.
Return the positive integer array ans = [num1, num2]. If there are multiple pairs satisfying these conditions, return the one with the
smallest
smallest num1 value. If no such numbers exist, return [-1, -1].

**Example 1:**

**Example 1:**
Input: left = 10, right = 19
Output: [11,13]

Explanation: The prime numbers between 10 and 19 are 11, 13, 17, and 19.
The closest gap between any pair is 2, which can be achieved by [11,13] or [17,19].
Since 11 is smaller than 17, we return the first pair.

**Example 2:**

**Example 2:**
Input: left = 4, right = 6
Output: [-1,-1]

Explanation: There exists only one prime number in the given range, so the conditions cannot be satisfied.

**Constraints:**

**Constraints:**
1 <= left <= right <= 106
.spoilerbutton {display:block; border:dashed; padding: 0px 0px; margin:10px 0px; font-size:150%; font-weight: bold; color:#000000; background-color:cyan; outline:0;
}
.spoiler {overflow:hidden;}
.spoiler > div {-webkit-transition: all 0s ease;-moz-transition: margin 0s ease;-o-transition: all 0s ease;transition: margin 0s ease;}
.spoilerbutton[value="Show Message"] + .spoiler > div {margin-top:-500%;}
.spoilerbutton[value="Hide Message"] + .spoiler {padding:5px;}
 */

        int mini=INT_MAX,l=left,r=-1,n1=-1,n2=-1;
        while(l<=right){
            if(prime[l]){
                break;
            }
        }
        r=l+1;
        while(r<=right){
            if(prime[r]){
                if(mini>(r-l)){
                    mini=r-l;
            l++;
        // }
        //     cout<<i<<" ";
        // for(int i:prime){
        }
        if(!prime[l]) return {n1,n2};
        cout<<l<<" "<<r;
            }
            for (int i = p * p; i <= right; i += p)
                prime[i] = false;
        vector<bool> prime(right + 1, true);
        for (int p = 2; p * p <= right; p++) {
            if (prime[p] == true) {
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        prime[1]=false;