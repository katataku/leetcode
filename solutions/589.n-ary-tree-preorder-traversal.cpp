/*
 * @lc app=leetcode id=589 lang=cpp
 *
 * [589] N-ary Tree Preorder Traversal
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
  void append_vec(vector<int> &v1, vector<int> &v2) {
    v1.insert(v1.end(), v2.begin(), v2.end());
  }

  vector<int> preorder(Node *root) {
    vector<int> ans;
    if (root == nullptr)
      return ans;
    ans.push_back(root->val);
    for (auto child : root->children) {
      vector<int> tmp = preorder(child);
      append_vec(ans, tmp);
    }
    return ans;
  }
};
// @lc code=end
