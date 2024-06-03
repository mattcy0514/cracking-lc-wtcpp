/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(begin(nums), end(nums), [](auto prev, auto current) {
            return prev < current;
        });
    }
};
// @lc code=end

