/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s), end(s), [](auto a, auto b) {
            return a < b;
        });
        sort(begin(t), end(t), [](auto a, auto b) {
            return a < b;
        });
        return s == t;
    }
};
// @lc code=end

