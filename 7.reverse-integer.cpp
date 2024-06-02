/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            if (result > INT_MAX / 10 || result < INT_MIN / 10)
                return 0;
            int last_result = (result * 10) + (x % 10);
            result = last_result;
            x = x / 10;
        }
        return result;
       
    }
};
// @lc code=end

