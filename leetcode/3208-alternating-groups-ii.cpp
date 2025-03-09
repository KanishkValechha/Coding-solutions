/*
 * 3208. Alternating Groups II
 * Difficulty: Medium
 * 
 * There is a circle of red and blue tiles. You are given an array of integers colors and an integer k. The color of tile i is represented by colors[i]:
colors[i] == 0 means that tile i is
red
red.
colors[i] == 1 means that tile i is
blue
blue.
An
alternating
alternating group is every k contiguous tiles in the circle with
alternating
alternating colors (each tile in the group except the first and last one has a different color from its
left
left and
right
right tiles).
Return the number of
alternating
alternating groups.
Note
Note that since colors represents a
circle
circle, the
first
first and the
last
last tiles are considered to be next to each other.

**Example 1:**

**Example 1:**
Input:
Input: colors = [0,1,0,1,0], k = 3
Output:
Output: 3

Explanation:

Explanation:
Alternating groups:

**Example 2:**

**Example 2:**
Input:
Input: colors = [0,1,0,0,1,0,1], k = 6
Output:
Output: 2

Explanation:

Explanation:
Alternating groups:

**Example 3:**

**Example 3:**
Input:
Input: colors = [1,1,0,1], k = 4
Output:
Output: 0

Explanation:

Explanation:

**Constraints:**

**Constraints:**
3 <= colors.length <= 105
0 <= colors[i] <= 1
3 <= k <= colors.length
 */

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();
        int m=n+k-1;
        int l=0,r=1;
        while(r<m){
            if((r-l+1)==k){
        }
                ans++;
            }
            r++;
        int ans=0;
            if(colors[r%n]==colors[(r-1)%n]){
                l++;
                l=r;
            }
    }
        return ans;
};