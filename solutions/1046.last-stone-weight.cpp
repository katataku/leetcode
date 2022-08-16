/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution {
public:
  int lastStoneWeight(vector<int> &stones) {
    while (true) {
      int n = stones.size();
      if (n == 0)
        return 0;
      if (n == 1)
        return stones[0];
      sort(stones.begin(), stones.end());
      int diff = stones[n - 1] - stones[n - 2];
      stones.pop_back();
      stones.pop_back();
      if (diff != 0) {
        stones.push_back(diff);
      }
    }
  }
};
// @lc code=end
