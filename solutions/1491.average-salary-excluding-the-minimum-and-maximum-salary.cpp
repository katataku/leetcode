/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution {
public:
  double average(vector<int> &salary) {
    sort(salary.begin(), salary.end());
    salary.pop_back();
    salary.erase(salary.begin());
    long long sum = 0;
    for (auto &i : salary) {
      sum += i;
    }
    return sum / (double)salary.size();
  }
};
// @lc code=end
