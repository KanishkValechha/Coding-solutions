/*
 * 1368. Minimum Cost to Make at Least One Valid Path in a Grid
 * Difficulty: Hard
 * 
 * Given an m x n grid. Each cell of the grid has a sign pointing to the next cell you should visit if you are currently in this cell. The sign of grid[i][j] can be:
1 which means go to the cell to the right. (i.e go from grid[i][j] to grid[i][j + 1])
2 which means go to the cell to the left. (i.e go from grid[i][j] to grid[i][j - 1])
3 which means go to the lower cell. (i.e go from grid[i][j] to grid[i + 1][j])
4 which means go to the upper cell. (i.e go from grid[i][j] to grid[i - 1][j])
Notice that there could be some signs on the cells of the grid that point outside the grid.
You will initially start at the upper left cell (0, 0). A valid path in the grid is a path that starts from the upper left cell (0, 0) and ends at the bottom-right cell (m - 1, n - 1) following the signs on the grid. The valid path does not have to be the shortest.
You can modify the sign on a cell with cost = 1. You can modify the sign on a cell
one time only
one time only.
Return the minimum cost to make the grid have at least one valid path.

**Example 1:**

**Example 1:**
Input: grid = [[1,1,1,1],[2,2,2,2],[1,1,1,1],[2,2,2,2]]
Output: 3

Explanation: You will start at point (0, 0).
The path to (3, 3) is as follows. (0, 0) --> (0, 1) --> (0, 2) --> (0, 3) change the arrow to down with cost = 1 --> (1, 3) --> (1, 2) --> (1, 1) --> (1, 0) change the arrow to down with cost = 1 --> (2, 0) --> (2, 1) --> (2, 2) --> (2, 3) change the arrow to down with cost = 1 --> (3, 3)
The total cost = 3.

**Example 2:**

**Example 2:**
Input: grid = [[1,1,3],[3,2,2],[1,1,4]]
Output: 0

Explanation: You can follow the path from (0, 0) to (2, 2).

**Example 3:**

**Example 3:**
Input: grid = [[1,2],[4,3]]
Output: 1

**Constraints:**

**Constraints:**
m == grid.length
n == grid[i].length
1 <= m, n <= 100
1 <= grid[i][j] <= 4
 */

        while (!q.empty()) {
            int x = q.front().first;
        bfs[0][0] = 0;
        vector<vector<int>> bfs(n, vector<int>(m, INT_MAX));
            {1, 0, 3},  
            {-1, 0, 4}   
        };
            int y = q.front().second;
            q.pop();
            for (const auto& i : d) {
                int x1 = x + i[0];
                int y1 = y + i[1];
                int value = i[2];
                if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && grid[x1][y1]) {
                    int c = bfs[x][y] + (grid[x][y] != value);
        vector<vector<int>> d = {
            {0, 1, 1},   
            {0, -1, 2},  
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({0, 0});
        int n = grid.size();
    int minCost(const vector<vector<int>>& grid) {
class Solution {
public:
                    if (c < bfs[x1][y1]) {
                        bfs[x1][y1] = c;
                        q.push({x1, y1});