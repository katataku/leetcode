/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
  map<int, int> m;

  int fib(int n) {
    if (m.find(n) != m.end())
      return m[n];
    if (n == 0 || n == 1)
      m[n] = n;
    else
      m[n] = fib(n - 1) + fib(n - 2);
    return m[n];
  }
};
// @lc code=end
