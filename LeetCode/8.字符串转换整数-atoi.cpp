/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
    public:
    int myAtoi(string str)
    {
        if (str.empty())
            return 0;
        int i = 0, sign = 1;
        while (isspace(str[i]))
            ++i;
        long res = 0;
        if (str[i] == '-' || str[i] == '+')
            sign = 44 - str[i++];
        while (i < str.size()) {
            if (isdigit(str[i]))
                res = 10 * res + str[i++] - '0';
            else
                return res * sign;
            if (res > INT_MAX)
                return sign == -1 ? INT_MIN : INT_MAX;
        }
        return res * sign;
    }
};
// @lc code=end
