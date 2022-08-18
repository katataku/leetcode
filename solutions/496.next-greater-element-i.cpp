/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    vector<int> ans;
    for (auto i : nums1) {
      vector<int>::iterator itr = find(nums2.begin(), nums2.end(), i);
      while (itr != nums2.end()) {
        if (*itr > i) {
          ans.push_back(*itr);
          break;
        }
        itr++;
      }
      if (itr == nums2.end()) {
        ans.push_back(-1);
      }
    }
    return ans;
  }
};
// @lc code=end
