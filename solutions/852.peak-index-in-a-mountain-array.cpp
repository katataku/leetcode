/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution {
public:
  int peakIndexInMountainArray(vector<int> &arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (right - left > 1) {
      int mid = (right + left) / 2;
      if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
        return mid;
      }
      if (arr[mid - 1] > arr[mid]) {
        right = mid;
      } else {
        left = mid;
      }
    }
    return 0;
  }
};
// @lc code=end
