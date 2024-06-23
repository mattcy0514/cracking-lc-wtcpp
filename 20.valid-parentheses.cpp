/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses_stack;
        for (auto &c : s) {
            if (c == '{' || c == '[' || c == '(') {
                parentheses_stack.push(c);
            }
            else {
                if (parentheses_stack.empty())
                    return false;
                if (c == ')' && parentheses_stack.top() != '(')
                    return false;
                if (c == '}' && parentheses_stack.top() != '{')
                    return false;
                if (c == ']' && parentheses_stack.top() != '[')
                    return false;
                
                parentheses_stack.pop();
            }
        }
        return parentheses_stack.empty();
    }
};
// @lc code=end

