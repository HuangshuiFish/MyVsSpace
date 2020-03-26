/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
    public:
    int search(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[0] <= nums[mid] && (target > nums[mid] || target < nums[0])) {
                left = mid + 1;
            }
            else if (nums[0] > nums[mid] && (target < nums[0] && target > nums[mid])) {
                left = mid + 1;
            }
            else if (nums[mid] == target) {
                return mid;
            }
            else {
                if (mid > 0) {  //防止right越界
                    right = mid - 1;
                }
                else {
                    right = mid;
                }
            }
        }
        return left == right && nums[left] == target ? left : -1;
    }
};
// @lc code=end
