/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> ans;
    deque<TreeNode *> cur_level;
    deque<TreeNode *> next_level;
    cur_level.push_back(root);
    while (cur_level.size() > 0) {
      vector<int> current_ans;
      next_level = {};
      while (cur_level.size() > 0) {
        TreeNode *tar = cur_level.front();
        cur_level.pop_front();
        if (tar != nullptr) {
          current_ans.push_back(tar->val);
          next_level.push_back(tar->left);
          next_level.push_back(tar->right);
        }
      }
      if (current_ans.size() > 0) {
        ans.push_back(current_ans);
      }
      cur_level = next_level;
      next_level = {};
    }
    return ans;
  }
};
// @lc code=end
