/*
 * 2429. Minimize XOR
 * Difficulty: Medium
 * 
 * Given two positive integers num1 and num2, find the positive integer x such that:
x has the same number of set bits as num2, and
The value x XOR num1 is
minimal
minimal.
Note that XOR is the bitwise XOR operation.
Return the integer x. The test cases are generated such that x is
uniquely determined
uniquely determined.
The number of
set bits
set bits of an integer is the number of 1's in its binary representation.

**Example 1:**

**Example 1:**
Input: num1 = 3, num2 = 5
Output: 3

Explanation:
The binary representations of num1 and num2 are 0011 and 0101, respectively.
The integer 3 has the same number of set bits as num2, and the value 3 XOR 3 = 0 is minimal.

**Example 2:**

**Example 2:**
Input: num1 = 1, num2 = 12
Output: 3

Explanation:
The binary representations of num1 and num2 are 0001 and 1100, respectively.
The integer 3 has the same number of set bits as num2, and the value 3 XOR 1 = 2 is minimal.

**Constraints:**

**Constraints:**
1 <= num1, num2 <= 109
 */

                if(n1[j]==1 && c2>0){
                    c2--;
                }
                if(n1[j]==1){
                    ans+=pow(2,j);
                }
            }
        }
        else{
            c2-=c1;
            for(int j=0;j<65;j++){
                if(c2>0 && n1[j]==0){
                    c2--;
                    n1[j]++;
                }
                if(n1[j]==1){
                    ans+=pow(2,j);
                }
            }
        }
        return ans;
            for(int j=64;j>=0;j--){
        if(c1>c2){
        long long ans=0;
        int c2=count(n2.begin(),n2.end(),1);
        int c1=count(n1.begin(),n1.end(),1);
                else{
                    n1[j]=0;
                }