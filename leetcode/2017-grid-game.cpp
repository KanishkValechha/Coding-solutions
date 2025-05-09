/*
 * 2017. Grid Game
 * Difficulty: Medium
 * 
 * You are given a
0-indexed 2D array grid of size 2 x n, where grid[r][c] represents the number of points at position (r, c) on the matrix. Two robots are playing a game on this matrix.
Both robots initially start at (0, 0) and want to reach (1, n-1). Each robot may only move to the
right
right ((r, c) to (r, c + 1)) or
down
down ((r, c) to (r + 1, c)).
At the start of the game, the
first
first robot moves from (0, 0) to (1, n-1), collecting all the points from the cells on its path. For all cells (r, c) traversed on the path, grid[r][c] is set to 0. Then, the
second
second robot moves from (0, 0) to (1, n-1), collecting the points on its path. Note that their paths may intersect with one another.
The
first
first robot wants to
minimize
minimize the number of points collected by the
second
second robot. In contrast, the
second
second robot wants to
maximize
maximize the number of points it collects. If both robots play
optimally
optimally, return the number of points collected by the
second
second robot.

**Example 1:**

**Example 1:**
Input: grid = [[2,5,4],[1,5,1]]
Output: 4

Explanation: The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.
The cells visited by the first robot are set to 0.
The second robot will collect 0 + 0 + 4 + 0 = 4 points.

**Example 2:**

**Example 2:**
Input: grid = [[3,3,1],[8,5,2]]
Output: 4

Explanation: The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.
The cells visited by the first robot are set to 0.
The second robot will collect 0 + 3 + 1 + 0 = 4 points.

**Example 3:**

**Example 3:**
Input: grid = [[1,3,1,15],[1,3,3,1]]
Output: 7

Explanation: The optimal path taken by the first robot is shown in red, and the optimal path taken by the second robot is shown in blue.
The cells visited by the first robot are set to 0.
The second robot will collect 0 + 1 + 3 + 3 + 0 = 7 points.

**Constraints:**

**Constraints:**
grid.length == 2
n == grid[r].length
1 <= n <= 5 * 104
1 <= grid[r][c] <= 105
 */

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long a=0;
        for (int i=0;i<n;i++) {
            a+=grid[0][i];
        }
        long long x=0, ans=LLONG_MAX;
        for(int i=0;i<n;i++) {
            a-=grid[0][i]; 
            ans=min(ans,max(a,x));
            x+=grid[1][i];
        }
        return ans; 
    }
        int n=grid[0].size();
};