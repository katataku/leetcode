/*
 * @lc app=leetcode id=429 lang=cpp
 *
 * [429] N-ary Tree Level Order Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
  map<int, vector<int>> mp;
  void insertNode(Node *node, int level) {
    if (node == nullptr)
      return;
    mp[level].push_back(node->val);
    for (auto item : node->children) {
      insertNode(item, level + 1);
    }
  }
  vector<vector<int>> levelOrder(Node *root) {
    insertNode(root, 0);
    vector<vector<int>> ans;
    for (int i = 0; i < mp.size(); i++) {
      ans.push_back(mp[i]);
    }
    return ans;
  }
};
// @lc code=end
