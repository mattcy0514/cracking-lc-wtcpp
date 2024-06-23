/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        string x_str = to_string(x);
        int left = 0, right = x_str.length() - 1;
        while (left <= right) {
            if (x_str[left] != x_str[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
// @lc code=end

