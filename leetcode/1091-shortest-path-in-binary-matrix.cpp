/*
 * 1091. Shortest Path in Binary Matrix
 * Difficulty: Medium
 * 
 * Given an n x n binary matrix grid, return the length of the shortest
clear path
clear path in the matrix. If there is no clear path, return -1.
A
clear path
clear path in a binary matrix is a path from the
top-left
top-left cell (i.e., (0, 0)) to the
bottom-right
bottom-right cell (i.e., (n - 1, n - 1)) such that:
All the visited cells of the path are 0.
All the adjacent cells of the path are
8-directionally
8-directionally connected (i.e., they are different and they share an edge or a corner).
The
length of a clear path
length of a clear path is the number of visited cells of this path.

**Example 1:**

**Example 1:**
Input: grid = [[0,1],[1,0]]
Output: 2

**Example 2:**

**Example 2:**
Input: grid = [[0,0,0],[1,1,0],[1,1,0]]
Output: 4

**Example 3:**

**Example 3:**
Input: grid = [[1,0,0],[1,1,0],[1,1,0]]
Output: -1

**Constraints:**

**Constraints:**
n == grid.length
n == grid[i].length
1 <= n <= 100
grid[i][j] is 0 or 1
 */

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<vector<int>>q;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        visited.push_back({0,0});
        q.push({0,0,1});
        while(!q.empty()){
            int x=q.front()[0];
        }
            q.pop();
        return -1;
            int y=q.front()[1];
            int l=q.front()[2];
            if(min(x,y)<0 || max(x,y)>=n || grid[x][y]==1) continue;
        vector<vector<int>>d={{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
            for(auto i:d){
                if(min(x+i[0],y+i[1])>=0 && max(x+i[0],y+i[1])<n && !visited[x+i[0]][y+i[1]]){
            }
            if(x==n-1 && y==n-1){
        int n=grid.size();
                return l;
            }
                    q.push({x+i[0],y+i[1],l+1});
                }
    }
                    visited[x+i[0]][y+i[1]]=true;
};