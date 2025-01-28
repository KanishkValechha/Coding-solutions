/*
 * 2658. Maximum Number of Fish in a Grid
 * Difficulty: Medium
 * 
 * You are given a
0-indexed 2D matrix grid of size m x n, where (r, c) represents:
A
land
land cell if grid[r][c] = 0, or
A
water
water cell containing grid[r][c] fish, if grid[r][c] > 0.
A fisher can start at any
water
water cell (r, c) and can do the following operations any number of times:
Catch all the fish at cell (r, c), or
Move to any adjacent
water
water cell.
Return the
maximum
maximum number of fish the fisher can catch if he chooses his starting cell optimally, or 0 if no water cell exists.
An
adjacent
adjacent cell of the cell (r, c), is one of the cells (r, c + 1), (r, c - 1), (r + 1, c) or (r - 1, c) if it exists.

**Example 1:**

**Example 1:**
Input: grid = [[0,2,1,0],[4,0,0,3],[1,0,0,4],[0,3,2,0]]
Output: 7

Explanation: The fisher can start at cell (1,3) and collect 3 fish, then move to cell (2,3) and collect 4 fish.

**Example 2:**

**Example 2:**
Input: grid = [[1,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,1]]
Output: 1

Explanation: The fisher can start at cells (0,0) or (3,3) and collect a single fish.

**Constraints:**

**Constraints:**
m == grid.length
n == grid[i].length
1 <= m, n <= 10
0 <= grid[i][j] <= 10
 */

class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
            for(int j=0;j<m;j++){
        }
        int sum=0;
        for(int i=0;i<n;i++){
            }
                sum=max(sum,dfs(n,m,i,j,grid));
    int dfs(int n,int m, int i,int j, vector<vector<int>>&grid){
    
        for(auto k:d){
    }
        }
        return sum;
    }
        if(i>=n || min(i,j)<0 || j>=m || grid[i][j]==0) return 0;
        return x;
            x+=dfs(n,m,i+k[0],j+k[1],grid);
    vector<vector<int>>d={{1,0},{-1,0},{0,1},{0,-1}};

        grid[i][j] = 0;
        int x=grid[i][j];
};