/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution {
public:
  bool findPath(vector<vector<int>> &rooms, set<int> &visited, int room) {
    visited.insert(room);
    if (rooms.size() == visited.size()) {
      return true;
    }
    for (auto next : rooms[room]) {
      if (visited.find(next) == visited.end()) {
        if (findPath(rooms, visited, next))
          return true;
      }
    }
    return false;
  }
  bool canVisitAllRooms(vector<vector<int>> &rooms) {
    set<int> visited;
    return findPath(rooms, visited, 0);
  }
};
// @lc code=end
