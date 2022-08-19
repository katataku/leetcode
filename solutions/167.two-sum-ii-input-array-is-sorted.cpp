/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    vector<int> ans;
    int n = numbers.size();
    for (int i = 0; i < n; i++) {
      int left = i;
      int right = n;
      while (right - left > 1) {
        int mid = (right + left) / 2;
        if (numbers[i] + numbers[mid] == target) {
          ans.push_back(i + 1);
          ans.push_back(mid + 1);
          return ans;
        }
        if (numbers[i] + numbers[mid] > target)
          right = mid;
        else
          left = mid;
      }
    }
    return ans;
  }
};
// @lc code=end
