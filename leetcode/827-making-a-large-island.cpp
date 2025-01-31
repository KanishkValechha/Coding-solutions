/*
 * 827. Making A Large Island
 * Difficulty: Hard
 * 
 * You are given an n x n binary matrix grid. You are allowed to change
at most one
at most one 0 to be 1.
Return the size of the largest
island
island in grid after applying this operation.
An
island
island is a 4-directionally connected group of 1s.

**Example 1:**

**Example 1:**
Input: grid = [[1,0],[0,1]]
Output: 3

Explanation: Change one 0 to 1 and connect two 1s, then we get an island with area = 3.

**Example 2:**

**Example 2:**
Input: grid = [[1,1],[1,0]]
Output: 4

Explanation: Change the 0 to 1 and make the island bigger, only one island with area = 4.

**Example 3:**

**Example 3:**
Input: grid = [[1,1],[1,1]]
Output: 4

Explanation: Can't change any 0 to 1, only one island with area = 4.

**Constraints:**

**Constraints:**
n == grid.length
n == grid[i].length
1 <= n <= 500
grid[i][j] is either 0 or 1.
 */

        bool f = false;
        for (int i = 0; i < n; i++) {

        }
                    x[id] = dfs(i, j, id);
                    id++;
                }
            }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
            if (i < 0 || j < 0 || i >= n || j >= n || grid[i][j] != 1) return 0;
            grid[i][j] = id;
            int size = 1;
            for (auto& d : d) {
                size += dfs(i + d[0], j + d[1], id);
            }
            return size;
        };
        function<int(int, int, int)> dfs = [&](int i, int j, int id) {
class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size(), id = 2, maxa = 0;
        unordered_map<int, int> x;
        vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
