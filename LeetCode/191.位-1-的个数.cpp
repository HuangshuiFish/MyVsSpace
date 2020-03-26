/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
    public:
    int hammingWeight(uint32_t n)
    {  //uint32_t是别名，unsigned int
        int ans(0);
        while (n != 0) {
            ans++;
            n &= (n - 1);  //n与n-1的与会把最后一个1变成0
        }
        return ans;
    }
};
// @lc code=end
