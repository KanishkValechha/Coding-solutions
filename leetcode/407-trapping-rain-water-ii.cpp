/*
 * 407. Trapping Rain Water II
 * Difficulty: Hard
 * 
 * Given an m x n integer matrix heightMap representing the height of each unit cell in a 2D elevation map, return the volume of water it can trap after raining.

**Example 1:**

**Example 1:**
Input: heightMap = [[1,4,3,1,3,2],[3,2,1,3,2,4],[2,3,3,2,3,1]]
Output: 4

Explanation: After the rain, water is trapped between the blocks.
We have two small ponds 1 and 3 units trapped.
The total volume of water trapped is 4.

**Example 2:**

**Example 2:**
Input: heightMap = [[3,3,3,3,3],[3,2,2,2,3],[3,2,1,2,3],[3,2,2,2,3],[3,3,3,3,3]]
Output: 10

**Constraints:**

**Constraints:**
m == heightMap.length
n == heightMap[i].length
1 <= m, n <= 200
0 <= heightMap[i][j] <= 2 * 104
 */

                    heightMap[i][j] = -1; 
                }
            }
        }
        int maxa = -1;
        int ans = 0;
        while (!q.empty()) {
            auto [h, i, j] = q.top();
            q.pop();
            maxa = max(maxa, h);
            ans += maxa - h;
            for (int d = 0; d < 4; d++) {
                int x = i + dir[d];
                int y = j + dir[d + 1];
                if (x >= 0 && y >= 0 && x < m && y < n &&
                    heightMap[x][y] != -1) {
                    q.push({heightMap[x][y], x, y});
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                    q.push({heightMap[i][j], i, j});
        priority_queue<array<int, 3>, vector<array<int, 3>>,greater<array<int, 3>>>q;
        vector<int> dir = {1, 0, -1, 0, 1};
        for (int i = 0; i < m; i++) {
        int m = heightMap.size();
        int n = heightMap[0].size();
class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {