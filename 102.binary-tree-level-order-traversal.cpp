/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root)
            return {};
        vector<vector<int>> answer;
        queue<TreeNode*> q1;
        q1.push(root);
        while (!q1.empty()) {
            int level_size = q1.size();
            vector<int> current_level;
            for (int i = 0; i < level_size; i++) {
                auto front = q1.front();
                q1.pop();
                current_level.push_back(front->val);
                if (front->left)
                    q1.push(front->left);
                if (front->right)
                    q1.push(front->right);
            }
            answer.push_back(current_level);
        }
        return answer;
    }
};
// @lc code=end

