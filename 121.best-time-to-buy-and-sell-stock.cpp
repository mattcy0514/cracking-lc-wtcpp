/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int call = prices[0];
        int profit = 0;
        for (auto &p : prices) {
            if (p < call) {
                call = p;
            }
            else if (p - call > profit) {
                profit = p - call;
            }
        }
        return profit;
    }
};
// @lc code=end

