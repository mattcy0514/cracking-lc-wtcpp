/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        auto i_start = begin(nums1);
        auto i_end = end(nums1);
        auto j_start = begin(nums2);
        auto j_end = end(nums2);

        vector<int> sortedVec;

        while (i_start != i_end || j_start != j_end) {
            auto i = i_start == i_end ? INT_MAX : *i_start;
            auto j = j_start == j_end ? INT_MAX : *j_start;
            if (i < j) {
                sortedVec.push_back(i);
                ++i_start;
            }
            else {
                sortedVec.push_back(j);
                ++j_start;
            }
        }

        auto is_odd = sortedVec.size() % 2 == 1 ? true : false;
        auto mid = static_cast<int>(sortedVec.size() / 2);
        if (is_odd) {
            return static_cast<double>(sortedVec.at(mid));
        }
        return (static_cast<double>(sortedVec.at(mid - 1)) + 
                static_cast<double>(sortedVec.at(mid))) / 2;
    }
};
// @lc code=end

