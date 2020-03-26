/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
    public:
    vector<vector<int>> threeSum(vector<int>& num)
    {
        vector<vector<int>> res;
        set<vector<int>>    ret;
        for (int i = 0; i < num.size() - 2; ++i) {
            for (int j = i + 1; j < num.size() - 1; ++j) {
                for (int k = j + 1; k < num.size(); ++k) {
                    vector<int> temp;
                    if (num[i] + num[k] + num[j] == 0) {
                        int a = (num[i] < num[j] ? num[i] : num[j]) < num[k] ? (num[i] < num[j] ? num[i] : num[j]) : num[k];
                        int b = (num[i] > num[j] ? num[i] : num[j]) > num[k] ? (num[i] > num[j] ? num[i] : num[j]) : num[k];
                        int c = 0 - a - b;
                        temp.push_back(a);
                        temp.push_back(c);
                        temp.push_back(b);
                        ret.insert(temp);
                    }
                }
            }
        }
        for (auto nichi : ret) {
            res.push_back(nichi);
        }
        return res;
    }
};
// @lc code=end
