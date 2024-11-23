/*
 * 1861. Rotating the Box
 * Difficulty: Medium
 * 
 * You are given anm x nmatrix of charactersboxrepresenting a side-view of a box. Each cell of the box is one of the following:A stone'#'A stationary obstacle'*'Empty'.'The box is rotated90 degrees clockwise, causing some of the stones to fall due to gravity. Each stone falls down until it lands on an obstacle, another stone, or the bottom of the box. Gravitydoes notaffect the obstacles' positions, and the inertia from the box's rotationdoes notaffect the stones' horizontal positions.It isguaranteedthat each stone inboxrests on an obstacle, another stone, or the bottom of the box.Returnann x mmatrix representing the box after the rotation described above.Example 1:Input:box = [["#",".","#"]]Output:[["."],
         ["#"],
         ["#"]]Example 2:Input:box = [["#",".","*","."],
              ["#","#","*","."]]Output:[["#","."],
         ["#","#"],
         ["*","*"],
         [".","."]]Example 3:Input:box = [["#","#","*",".","*","."],
              ["#","#","#","*",".","."],
              ["#","#","#",".","#","."]]Output:[[".","#","#"],
         [".","#","#"],
         ["#","#","*"],
         ["#","*","."],
         ["#",".","*"],
         ["#",".","."]]Constraints:m == box.lengthn == box[i].length1 <= m, n <= 500box[i][j]is either'#','*', or'.'.
 */

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& g) {
        int r = g.size(), c = g[0].size();
        vector<vector<char>> v(c, vector<char>(r, '*'));
        for (int i = 0, k = r - 1; i < r; ++i, --k) {
            int e = 0;
            for (int j = 0; j < c; ++j) {
                if (g[k][j] == '.') {
                    v[j][i] = v[e][i];
                    v[e++][i] = '.';
                } else if (g[k][j] == '#') {
                    v[j][i] = '#';
                } else {
                    e = j + 1;
                }
            }
        }
        return v;
    }
};