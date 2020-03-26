/*
 * @lc app=leetcode.cn id=1137 lang=cpp
 *
 * [1137] 第 N 个泰波那契数
 */

// @lc code=start
class Solution {
    public:
    int tribonacci(int n)
    {
        if (n < 2)
            return n;
        int a(0), b(1), c(1), d = a + b + c;
        while (n-- > 2) {
            d = a + b + c, a = b, b = c, c = d;
        }
        return c;
    }
};
// @lc code=end
