/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> hash_map;
        for (auto i : strs) {
            string temp = i;
            sort(i.begin(), i.end());
            hash_map[i].push_back(temp);
        }
        vector<vector<string>> ans;
        for (auto j : hash_map) {
            ans.push_back(j.second);
        }
        return ans;
    }
};
// @lc code=end
