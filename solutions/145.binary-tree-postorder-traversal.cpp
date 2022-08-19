/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  void appendVec(vector<int> &v1, vector<int> v2) {
    for (auto item : v2) {
      v1.push_back(item);
    }
  }
  vector<int> postorderTraversal(TreeNode *root) {
    vector<int> ans;
    if (root == nullptr)
      return ans;
    appendVec(ans, postorderTraversal(root->left));
    appendVec(ans, postorderTraversal(root->right));
    ans.push_back(root->val);
    return ans;
  }
};
// @lc code=end
