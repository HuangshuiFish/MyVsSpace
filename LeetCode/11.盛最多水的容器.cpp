/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
    public:
    int maxArea(vector<int>& height)
    {
        int ans = 0;
        int i = 0;
        int j = height.size() - 1;
        for (i, j; i < j;) {
            int area = (j - i) * min(height[i], height[j]);
            ans = max(ans, area);
            height[i] < height[j] ? i++ : j--;
        }
        return ans;
    }
};
// @lc code=end
