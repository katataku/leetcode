/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
  map<int, unsigned int> m;
  int tribonacci(int n) {
    if (m.find(n) != m.end())
      return m[n];
    if (n == 0)
      m[n] = 0;
    else if (n == 1 || n == 2)
      m[n] = 1;
    else {
      m[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
    return m[n];
  }
};
// @lc code=end
