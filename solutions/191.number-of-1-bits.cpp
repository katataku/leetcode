/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
  int hammingWeight(uint32_t n) {
    uint32_t one = 1;
    int ans = 0;
    for (auto i : vector<int>(32)) {
      if (n & one == one)
        ans += 1;
      n = n >> 1;
    }
    return ans;
  }
};
// @lc code=end
