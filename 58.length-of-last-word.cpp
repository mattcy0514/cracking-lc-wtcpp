/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        auto last_space_count = 0;
        reverse(begin(s), end(s));
        for (auto it = begin(s); it != end(s); ++it) {
            if (*it == ' ') {
                last_space_count++;
            }
            else
                break;
        }
        auto found = find(begin(s) + last_space_count, end(s), ' ');
        return static_cast<int>(distance(begin(s) + last_space_count, found));
    }
};
// @lc code=end

