/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
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
    vector<int> postorder(Node* root)
    {
        vector<int> result;
        postorder1(root, result);
        return result;
    }
    void postorder1(Node* root1, vector<int>& result1)
    {
        if (root1 == nullptr)
            return;
        for (auto node : root1->children)  //遍历根节点的儿子节点（不分左右节点）
            postorder1(node, result1);
        result1.push_back(root1->val);
    }
};
// @lc code=end
