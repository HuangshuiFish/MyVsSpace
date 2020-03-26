/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 */

// @lc code=start
class Solution {
    public:
    int majorityElement(vector<int>& nums)
    {
        return majority(nums, 0, nums.size() - 1);
    }

    private:
    int majority(vector<int>& nums, int l, int r)
    {
        //终止条件
        if (l == r) {
            return nums[l];
        }
        int m = l + (r - l) / 2, lm = majority(nums, l, m), rm = majority(nums, m + 1, r);
        if (lm == rm) {
            return lm;
        }
        return count(nums.begin() + l, nums.begin() + r + 1, lm) > count(nums.begin() + l, nums.begin() + r + 1, rm) ? lm : rm;
    }
};
// @lc code=end
