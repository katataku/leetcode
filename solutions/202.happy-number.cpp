/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
  set<int> s;
  bool isHappy(int n) {
    if (n == 1)
      return true;
    if (s.count(n) > 0)
      return false;
    s.insert(n);
    int ans = 0;
    while (n >= 10) {
      ans += (n % 10) * (n % 10);
      n /= 10;
    }
    ans += (n % 10) * (n % 10);
    return (isHappy(ans));
  }
};
// @lc code=end
