/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
    public:
    vector<int> preorder(Node* root)
    {
        vector<int> ans;
        preorder1(root, ans);
        return ans;
    }
    void preorder1(Node* root1, vector<int>& result1)
    {
        if (!root1)
            return;
        result1.push_back(root1->val);
        for (auto i : root1->children) {
            preorder1(i, result1);
        }
    }
};
// @lc code=end
