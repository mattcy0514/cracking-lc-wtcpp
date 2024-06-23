/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        int carry = 1;
        for (; i > -1; i--) {
            digits[i] += carry;
            if (digits[i] == 10) {
                digits[i] = 0;
                if (i == 0) {
                    digits.insert(digits.begin(), 1);
                }
                else {
                    carry = 1;
                }
            }
            else {
                carry = 0;
            }
        }
        
        return digits;
    }
};
// @lc code=end

