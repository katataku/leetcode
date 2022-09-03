/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
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
  vector<double> sum;
  vector<int> count;
  void addTree(TreeNode *root, int level) {
    if (root == nullptr)
      return;
    sum[level] += root->val;
    count[level] += 1;
    addTree(root->left, level + 1);
    addTree(root->right, level + 1);
  }
  vector<double> averageOfLevels(TreeNode *root) {
    sum.assign(99999, 0);
    count.assign(99999, 0);
    addTree(root, 0);
    vector<double> average;
    for (int i = 0; i < count.size(); i++) {
      if (count[i] == 0)
        break;
      average.push_back(sum[i] / count[i]);
    }
    return average;
  }
};
// @lc code=end
