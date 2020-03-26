/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
    public:
    bool lemonadeChange(vector<int>& bills)
    {
        int five = 0;
        int ten = 0;
        int twenty = 0;
        for (auto i : bills) {
            if (i == 5)
                five++;
            else if (i == 10) {
                ten++;
                five--;
            }
            else {
                twenty++;
                if (ten >= 1) {
                    ten--;
                    five--;
                }
                else {
                    five = five - 3;
                }
            }
            if (five < 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
