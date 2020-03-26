/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层次遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    public:
    vector<vector<int>> ret;

    void buildVector(TreeNode* root, int depth)
    {
        if (root == NULL) {
            return;
        }
        if (ret.size() == depth) {
            ret.push_back(vector<int>());
        }
        ret[depth].push_back(root->val);
        buildVector(root->left, depth + 1);
        buildVector(root->right, depth + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root)
    {
        buildVector(root, 0);
        return ret;
    }
};
// @lc code=end
