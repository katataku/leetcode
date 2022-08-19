/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> ans;
    if (root == nullptr)
      return ans;
    ans.push_back(root->val);
    appendVec(ans, preorderTraversal(root->left));
    appendVec(ans, preorderTraversal(root->right));
    return ans;
  }
};
// @lc code=end
