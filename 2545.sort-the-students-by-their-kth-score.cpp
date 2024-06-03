/*
 * @lc app=leetcode id=2545 lang=cpp
 *
 * [2545] Sort the Students by Their Kth Score
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        // [[10,6,9,1],[7,5,11,2],[4,8,3,15]]
        // Consider [10,6,9,1],[7,5,11,2],[4,8,3,15] as a single element
        // Like A, B, C and sort A, B, C by A[k], B[k], C[k]
        sort(begin(score), end(score), [&k](auto prev, auto current) {
            return prev[k] > current[k];
        });
        return score;
    }
};
// @lc code=end

