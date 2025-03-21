/*
 * 1267. Count Servers that Communicate
 * Difficulty: Medium
 * 
 * You are given a map of a server center, represented as a m * n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.
Return the number of servers that communicate with any other server.

**Example 1:**

**Example 1:**
Input: grid = [[1,0],[0,1]]
Output: 0

Explanation: No servers can communicate with others.

**Example 2:**

**Example 2:**
Input: grid = [[1,0],[1,1]]
Output: 3

Explanation: All three servers can communicate with at least one other server.

**Example 3:**

**Example 3:**
Input: grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]]
Output: 4

Explanation: The two servers in the first row can communicate with each other. The two servers in the third column can communicate with each other. The server at right bottom corner can't communicate with any other server.

**Constraints:**

**Constraints:**
m == grid.length
n == grid[i].length
1 <= m <= 250
1 <= n <= 250
grid[i][j] == 0 or 1
 */

    int countServers(vector<vector<int>>& arr) {
        int ans=0;
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
            }
                    r[i]++;
                }
        }
class Solution {
public:
        vector<int>r(n);
        vector<int>c(m);
                    c[j]++;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1 && (r[i]>1 || c[j]>1)){
                    ans++;
                }
            }
        }
        return ans;
    }
};