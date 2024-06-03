/*
 * @lc app=leetcode id=692 lang=cpp
 *
 * [692] Top K Frequent Words
 */

// @lc code=start
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> count_map;
        for (auto &word : words) {
            auto found = count_map.find(word);
            if (found != end(count_map)) {
                count_map[word]++;
            }
            else {
                count_map[word] = 1;
            }
        }
        
        vector<pair<string, int>> count_vec(begin(count_map), end(count_map));
        sort(begin(count_vec), end(count_vec), [](auto a, auto b) {
            if (a.second == b.second) {
                return a.first < b.first; // If frequencies are equal, sort alphabetically
            }
            return a.second > b.second;
        });

        vector<string> result;
        for (int i = 0; i < k; i++) {
            result.push_back(count_vec[i].first);
        }
        return result;
    }
};
// @lc code=end

