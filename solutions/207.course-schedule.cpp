/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
public:
  bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
    vector<vector<int>> unchecked_prerequisites = prerequisites;

    int last_size = 9999;
    while (last_size != prerequisites.size()) {
      last_size = prerequisites.size();
      for (int i = 0; i < numCourses; i++) {
        bool flag = true;
        for (auto it = unchecked_prerequisites.begin();
             it != unchecked_prerequisites.end(); ++it) {
          if ((*it)[0] == i) {
            flag = false;
            break;
          }
        }
        if (flag) {
          auto it = unchecked_prerequisites.begin();
          while (it != unchecked_prerequisites.end()) {
            if ((*it)[1] == i) {
              ++it;
              unchecked_prerequisites.erase(it);
            } else {
              ++it;
            }
          }
        }
      }
      if (prerequisites.size() == 0)
        return true;
    }
    return (prerequisites.empty());
  }
};
// @lc code=end
