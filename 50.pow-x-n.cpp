/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }

        bool sign = n > 0;
        unsigned int absN = abs(n);

        double result = 1.0;
        while (absN > 0) {
            if (absN % 2 == 1) {
                result *= x;
            }
            x *= x;
            absN /= 2;
        }

        return sign ? result : 1.0 / result;
    }
};
// @lc code=end

