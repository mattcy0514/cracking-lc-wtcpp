/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        unordered_map<int, int> count_map;
        for (int i = 0; i < nums.size(); i++) {
            if (count_map.find(nums[i]) == count_map.end()) {
                count_map[nums[i]] = 1;
            }
            else {
                if (++count_map[nums[i]] > nums.size() / 2) {
                    return nums[i];
                }
            }
        }
        return 0;
    }
};
// @lc code=end

