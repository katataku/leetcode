/*
 * @lc app=leetcode id=606 lang=cpp
 *
 * [606] Construct String from Binary Tree
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
  string tree2str(TreeNode *root) {
    if (root == nullptr)
      return "";
    string ans;
    ans += to_string(root->val);
    if (root->left != nullptr) {
      ans += "(";
      ans += tree2str(root->left);
      ans += ")";
      if (root->right != nullptr) {
        ans += "(";
        ans += tree2str(root->right);
        ans += ")";
      }
    } else {
      if (root->right != nullptr) {
        ans += "()(";
        ans += tree2str(root->right);
        ans += ")";
      }
    }
    return ans;
  }
};
// @lc code=end
