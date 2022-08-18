/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
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
  int sumOfLeftLeaves_left(TreeNode *root) {
    if (root == nullptr)
      return 0;
    if (root->left == nullptr && root->right == nullptr)
      return root->val;
    return sumOfLeftLeaves_left(root->left) + sumOfLeftLeaves(root->right);
  }

  int sumOfLeftLeaves(TreeNode *root) {
    if (root == nullptr)
      return 0;
    return sumOfLeftLeaves_left(root->left) + sumOfLeftLeaves(root->right);
  }
};
// @lc code=end
