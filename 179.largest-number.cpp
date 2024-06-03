/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */

// @lc code=start
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        for (auto &num : nums) {
            str_nums.push_back(to_string(num));
        }
        sort(begin(str_nums), end(str_nums), [](auto a, auto b) {
            return a + b > b + a;
        });
        if (str_nums[0] == "0")
            return "0";
        string result;
        for (auto &num : str_nums) {
            result += num;
        }
        return result;
    }
};
// @lc code=end

