/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto &v : matrix) {
            auto it = find(begin(v), end(v), target);
            if (it != end(v) && *it == target) {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

