/*
 * 1975. Maximum Matrix Sum
 * Difficulty: Medium
 * 
 * You are given ann x nintegermatrix. You can do the following operationanynumber of times:Choose any twoadjacentelements ofmatrixandmultiplyeach of them by-1.Two elements are consideredadjacentif and only if they share aborder.Your goal is tomaximizethe summation of the matrix's elements. Returnthemaximumsum of the matrix's elements using the operation mentioned above.Example 1:Input:matrix = [[1,-1],[-1,1]]Output:4Explanation:We can follow the following steps to reach sum equals 4:
- Multiply the 2 elements in the first row by -1.
- Multiply the 2 elements in the first column by -1.Example 2:Input:matrix = [[1,2,3],[-1,-2,-3],[1,2,3]]Output:16Explanation:We can follow the following step to reach sum equals 16:
- Multiply the 2 last elements in the second row by -1.Constraints:n == matrix.length == matrix[i].length2 <= n <= 250-105<= matrix[i][j] <= 105
 */

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0, n = 0;
        for (auto& i : matrix) {
            for (int j : i) {
                sum += abs(j);
                if (j < 0) {
                    n++;
                }
            }
        }
        if (n % 2 == 1) {
            int mini = INT_MAX;
            for (auto& i : matrix) {
                for (int j : i) {
                    mini = min(mini, abs(j));
                }
            }
            sum -= 2 * mini;
        }

        return sum;
    }
};