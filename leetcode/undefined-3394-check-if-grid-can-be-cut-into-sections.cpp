/*
 * 3394. Check if Grid can be Cut into Sections
 * Difficulty: Medium
 * 
 * You are given an integer n representing the dimensions of an n x n grid, with the origin at the bottom-left corner of the grid. You are also given a 2D array of coordinates rectangles, where rectangles[i] is in the form [startx, starty, endx, endy], representing a rectangle on the grid. Each rectangle is defined as follows:
(startx, starty): The bottom-left corner of the rectangle.
(endx, endy): The top-right corner of the rectangle.
Note
Note that the rectangles do not overlap. Your task is to determine if it is possible to make
either two horizontal or two vertical cuts
either two horizontal or two vertical cuts on the grid such that:
Each of the three resulting sections formed by the cuts contains
at least
at least one rectangle.
Every rectangle belongs to
exactly
exactly one section.
Return true if such cuts can be made; otherwise, return false.

**Example 1:**

**Example 1:**
Input:
Input: n = 5, rectangles = [[1,0,5,2],[0,2,2,4],[3,2,5,3],[0,4,4,5]]
Output:
Output: true

Explanation:

Explanation:
The grid is shown in the diagram. We can make horizontal cuts at y = 2 and y = 4. Hence, output is true.

**Example 2:**

**Example 2:**
Input:
Input: n = 4, rectangles = [[0,0,1,1],[2,0,3,4],[0,2,2,3],[3,0,4,3]]
Output:
Output: true

Explanation:

Explanation:
We can make vertical cuts at x = 2 and x = 3. Hence, output is true.

**Example 3:**

**Example 3:**
Input:
Input: n = 4, rectangles = [[0,2,2,4],[1,0,3,2],[2,2,3,4],[3,0,4,2],[3,2,4,4]]
Output:
Output: false

Explanation:

Explanation:
We cannot make two horizontal or two vertical cuts that satisfy the conditions. Hence, output is false.

**Constraints:**

**Constraints:**
3 <= n <= 109
3 <= rectangles.length <= 105
0 <= rectangles[i][0] < rectangles[i][2] <= n
0 <= rectangles[i][1] < rectangles[i][3] <= n
No two rectangles overlap.
 */

        });
        int c=0;
        int x=rectangles[0][k+2];
        for(int i=1;i<rectangles.size();i++){
            int a=rectangles[i][k];
        }
            int b=rectangles[i][k+2];
            if(x<=a) c++;
            x=max(x,b);
        sort(rectangles.begin(), rectangles.end(), [k](const vector<int>& a, const vector<int>& b) {
            return a[k] < b[k]; 
        });
        int d=0;
        x=rectangles[0][k+2];
        for(int i=1;i<rectangles.size();i++){
            int a=rectangles[i][k];
            int b=rectangles[i][k+2];
            if(x<=a) d++;
            x=max(x,b);
        }
        return d>=2 || c>=2;
        k=1;
    }
};
            return a[k] < b[k]; 
        sort(rectangles.begin(), rectangles.end(), [k](const vector<int>& a, const vector<int>& b) {
        int k=0;
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
public: