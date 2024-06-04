/*
 * @lc app=leetcode id=100 lang=cpp
 *
 * [100] Same Tree
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> p_vec;
        vector<int> q_vec;
        inorder_traverse_and_append(p, p_vec);
        inorder_traverse_and_append(q, q_vec);
        return equal(begin(p_vec), end(p_vec), begin(q_vec), end(q_vec));
    }
    
    void inorder_traverse_and_append(TreeNode* t, vector<int> &vec) {
        if (t == nullptr) {
            vec.push_back(INT_MAX);
            return;
        }
        vec.push_back(t->val);
        inorder_traverse_and_append(t->left, vec);
        inorder_traverse_and_append(t->right, vec);
    }
};
// @lc code=end

