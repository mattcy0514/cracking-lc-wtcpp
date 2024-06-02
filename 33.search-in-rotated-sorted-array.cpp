/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto p = find(nums.begin(), nums.end() , target);
        if (p != nums.end())
            return p - nums.begin();
        return -1;
    }
};
// @lc code=end

