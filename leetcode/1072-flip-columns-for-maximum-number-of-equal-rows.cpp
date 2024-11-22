/*
 * 1072. Flip Columns For Maximum Number of Equal Rows
 * Difficulty: Medium
 * 
 * You are given anm x nbinary matrixmatrix.You can choose any number of columns in the matrix and flip every cell in that column (i.e., Change the value of the cell from0to1or vice versa).
Returnthe maximum number of rows that have all values equal after some number of flips.Example 1:Input:matrix = [[0,1],[1,1]]Output:1Explanation:After flipping no values, 1 row has all values equal.
Example 2:Input:matrix = [[0,1],[1,0]]Output:2Explanation:After flipping values in the first column, both rows have equal values.Example 3:Input:matrix = [[0,0,0],[0,0,1],[1,1,0]]Output:2
Explanation:After flipping values in the first two columns, the last two rows have equal values.Constraints:m == matrix.lengthn == matrix[i].length1 <= m, n <= 300matrix[i][j]is either0or1.
 */

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> mp;
        int rows = matrix.size(), cols = matrix[0].size(), res = 0;
        for (int i = 0; i < rows; ++i) {
            string s1 = "", s2 = "";
            for (int j = 0; j < cols; ++j) {
                s1 += matrix[i][j] + '0';
                s2 += 1 - matrix[i][j] + '0';
            }
            mp[s1]++;
            mp[s2]++;
            res = max(res, max(mp[s1], mp[s2]));
        }
        return res;
    }
};
