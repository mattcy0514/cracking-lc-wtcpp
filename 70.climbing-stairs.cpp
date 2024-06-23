/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        int first = 1, second = 2;
        int result = 0;

        for (int i = 2; i < n; i++) {
            result = first + second;
            first = second;
            second = result;
        }
        return result;
    }
};
// @lc code=end

