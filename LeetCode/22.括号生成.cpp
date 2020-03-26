/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
    public:
    vector<string> ans;
    vector<string> generateParenthesis(int n)
    {
        generate(0, 0, n, "");
        return ans;
    }

    void generate(int left, int right, int n, string s)
    {
        if (left == n && right == n) {
            ans.push_back(s);
            return;
        }
        if (left < n) {
            generate(left + 1, right, n, s + "(");
        }
        if (right < left) {
            generate(left, right + 1, n, s + ")");
        }
    }
};
// @lc code=end
