/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (auto it = nums.begin(); it != nums.end(); it++) {
            auto num_to_be_found = target - *it;
            if (num_map.find(num_to_be_found) == num_map.end())
                num_map[*it] = distance(nums.begin(), it);
            else
                return {static_cast<int>(distance(nums.begin(), it)),
                    num_map[num_to_be_found]};
        }
        return {};

    }
};
// @lc code=end

