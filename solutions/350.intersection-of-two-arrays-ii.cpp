/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    vector<int> ans;

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    while (nums1.size() > 0 && nums2.size() > 0) {
      int tar1 = nums1[nums1.size() - 1];
      int tar2 = nums2[nums2.size() - 1];
      if (tar1 == tar2) {
        ans.push_back(tar1);
        nums1.pop_back();
        nums2.pop_back();
      } else if (tar1 > tar2) {
        nums1.pop_back();
      } else {
        nums2.pop_back();
      }
    }
    return ans;
  }
};
// @lc code=end
