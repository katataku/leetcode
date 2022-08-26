/*
 * @lc app=leetcode id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
  Node *connect(Node *root) {
    if (root == nullptr)
      return root;
    if (root->left != nullptr)
      root->left = connect(root->left);
    if (root->right != nullptr)
      root->right = connect(root->right);

    if (root->left != nullptr && root->right != nullptr) {
      root->left->next = root->right;
      Node *left = root->left;
      Node *right = root->right;
      while (left != nullptr) {
        left->next = right;
        left = left->right;
        right = right->left;
      }
    }
    return root;
  }
};
// @lc code=end
