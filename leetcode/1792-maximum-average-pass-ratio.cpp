/*
 * 1792. Maximum Average Pass Ratio
 * Difficulty: Medium
 * 
 * There is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array classes, where classes[i] = [passi, totali]. You know beforehand that in the ith class, there are totali total students, but only passi number of students will pass the exam.
You are also given an integer extraStudents. There are another extraStudents brilliant students that are
guaranteed
guaranteed to pass the exam of any class they are assigned to. You want to assign each of the extraStudents students to a class in a way that
maximizes
maximizes the
average
average pass ratio across
all
all the classes.
The
pass ratio
pass ratio of a class is equal to the number of students of the class that will pass the exam divided by the total number of students of the class. The
average pass ratio
average pass ratio is the sum of pass ratios of all the classes divided by the number of the classes.
Return the
maximum
maximum possible average pass ratio after assigning the extraStudents students. Answers within 10-5 of the actual answer will be accepted.

**Example 1:**

**Example 1:**
Input: classes = [[1,2],[3,5],[2,2]], extraStudents = 2
Output: 0.78333

Explanation: You can assign the two extra students to the first class. The average pass ratio will be equal to (3/4 + 3/5 + 2/2) / 3 = 0.78333.

**Example 2:**

**Example 2:**
Input: classes = [[2,4],[3,9],[4,5],[2,10]], extraStudents = 4
Output: 0.53485

**Constraints:**

**Constraints:**
1 <= classes.length <= 105
classes[i].length == 2
1 <= passi <= totali <= 105
1 <= extraStudents <= 105
 */

class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto g = [](double p, double t) { return (p + 1) / (t + 1) - p / t; };
        priority_queue<pair<double, pair<int, int>>> q;
            q.push({g(v[0], v[1]), {v[0], v[1]}});
        }
            auto t = q.top(); q.pop();
        for (int i = 0; i < extraStudents; ++i) {
            int p = t.second.first, tt = t.second.second;
        }
        double s = 0;
        while (!q.empty()) {
        }
    }
            auto t = q.top(); q.pop();
            s += (double)t.second.first / t.second.second;
        return s / classes.size();
            q.push({g(p + 1, tt + 1), {p + 1, tt + 1}});
        for (const auto& v : classes) {
};