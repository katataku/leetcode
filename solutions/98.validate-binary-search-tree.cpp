/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    ans.push_back(root->val);
    appendVec(ans, postorderTraversal(root->right));
    return ans;
  }
  bool isValidBST(TreeNode *root) {
    vector<int> v = postorderTraversal(root);

    for (int i = 1; i < v.size(); i++) {
      if (v[i - 1] >= v[i])
        return false;
    }
    return true;
  }
};
// @lc code=end
