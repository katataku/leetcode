/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    for (int i = 0; i < n; ++i) {
      nums1[m + i] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
  }
};
// @lc code=end
