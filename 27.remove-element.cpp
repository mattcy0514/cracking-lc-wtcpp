/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto end = remove(nums.begin(), nums.end(), val);
        nums.erase(end, nums.end());
        return nums.size();
    }
};
// @lc code=end

