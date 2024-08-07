/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
    int minDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        queue<TreeNode*> q1;
        q1.push(root);
        int level = 1;
        while (!q1.empty()) {
            int level_size = q1.size();
            for (int i = 0; i < level_size; i++) {
                auto front = q1.front();
                q1.pop();
                if (front->left == nullptr && front->right == nullptr)
                    return level;
                if (front->left)
                    q1.push(front->left);
                if (front->right)
                    q1.push(front->right);
            }
            level++;
        }
        return level;
    }
};
// @lc code=end

