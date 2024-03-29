/*
 * @lc app=leetcode id=1448 lang=cpp
 *
 * [1448] Count Good Nodes in Binary Tree
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
  int countGoodNodes(TreeNode *root, int max) {
    if (root == nullptr)
      return 0;
    int ans = 0;
    if (root->val >= max)
      ans++;
    ans += countGoodNodes(root->left, std::max(max, root->val));
    ans += countGoodNodes(root->right, std::max(max, root->val));
    return ans;
  }

  int goodNodes(TreeNode *root) { return countGoodNodes(root, -99999); }
};
// @lc code=end
