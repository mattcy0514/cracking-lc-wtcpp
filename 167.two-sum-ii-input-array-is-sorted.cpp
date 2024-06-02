/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto p_start = numbers.begin();
        auto p_end = numbers.end() - 1;

        while (p_start < p_end) {
            if (*p_start + *p_end == target) {
                return {static_cast<int>(distance(numbers.begin(), p_start + 1)),
                    static_cast<int>(distance(numbers.begin(), p_end + 1))};
            }
            else if (*p_start + *p_end < target)
                p_start++;
            else
                p_end--;
        }
        return {};
    }
};
// @lc code=end

