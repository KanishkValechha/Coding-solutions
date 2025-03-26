/*
 * 2033. Minimum Operations to Make a Uni-Value Grid
 * Difficulty: Medium
 * 
 * You are given a 2D integer grid of size m x n and an integer x. In one operation, you can
add
add x to or
subtract
subtract x from any element in the grid.
A
uni-value grid
uni-value grid is a grid where all the elements of it are equal.
Return the
minimum
minimum number of operations to make the grid
uni-value
uni-value. If it is not possible, return -1.

**Example 1:**

**Example 1:**
Input: grid = [[2,4],[6,8]], x = 2
Output: 4

Explanation: We can make every element equal to 4 by doing the following:
- Add x to 2 once.
- Subtract x from 6 once.
- Subtract x from 8 twice.
A total of 4 operations were used.

**Example 2:**

**Example 2:**
Input: grid = [[1,5],[2,3]], x = 1
Output: 5

Explanation: We can make every element equal to 3.

**Example 3:**

**Example 3:**
Input: grid = [[1,2],[3,4]], x = 2
Output: -1

Explanation: It is impossible to make every element equal.

**Constraints:**

**Constraints:**
m == grid.length
n == grid[i].length
1 <= m, n <= 105
1 <= m * n <= 105
1 <= x, grid[i][j] <= 104
 */

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>a;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                a.push_back(grid[i][j]);
            }
        }
        sort(a.begin(),a.end());
        int n=a.size();
        int m=a[n/2];
        }
    }
            ans+=abs(m-i)/x;
        int ans=0;
            if(i%x != m%x) return -1;
        for(int i:a){
        return ans;
};