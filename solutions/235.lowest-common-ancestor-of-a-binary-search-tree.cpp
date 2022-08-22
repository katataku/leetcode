/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
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
  void appendVec(vector<TreeNode *> &v1, vector<TreeNode *> v2) {
    for (auto item : v2) {
      v1.push_back(item);
    }
  }
  vector<TreeNode *> findPath(TreeNode *root, TreeNode *p) {
    vector<TreeNode *> ans;
    if (root == nullptr)
      return {};
    if (root->val == p->val) {
      return {root};
    }
    vector<TreeNode *> left = findPath(root->left, p);
    if (left.size() != 0) {
      ans.push_back(root);
      appendVec(ans, left);
      return ans;
    }
    vector<TreeNode *> right = findPath(root->right, p);
    if (right.size() != 0) {
      ans.push_back(root);
      appendVec(ans, right);
      return ans;
    }
    return ans;
  }
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    vector<TreeNode *> p_list = findPath(root, p);
    vector<TreeNode *> q_list = findPath(root, q);
    int n = min(p_list.size(), q_list.size());

    int i;
    for (i = 0; i < n; i++) {
      if (p_list[i]->val != q_list[i]->val)
        break;
    }
    return p_list[i - 1];
  }
};
// @lc code=end
