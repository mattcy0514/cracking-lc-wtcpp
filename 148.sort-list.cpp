/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        auto helper = head;
        while (helper != nullptr) {
            vec.push_back(helper->val);
            auto tmp = helper;
            helper = helper->next;
            delete tmp;
        }
        sort(begin(vec), end(vec), [](auto a, auto b) {
            return a < b;
        });
        
        ListNode* dummy_head = new ListNode();
        ListNode* d_head = dummy_head;
        for (auto &i : vec) {
            d_head->next = new ListNode(i);
            d_head = d_head->next;
        }
        return dummy_head->next;
    }
};
// @lc code=end

