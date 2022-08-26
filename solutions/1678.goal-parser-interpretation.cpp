/*
 * @lc app=leetcode id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */

// @lc code=start
class Solution {
public:
  string interpret(string command) {
    string result;
    for (int i = 0; i < command.length(); i++) {
      if (command[i] == 'G') {
        result.push_back('G');
      }
      if (command[i] == '(') {
        if (command[i + 1] == ')') {
          result.push_back('o');
          i++;
        } else {
          result.push_back('a');
          result.push_back('l');
          i += 3;
        }
      }
    }
    return result;
  }
};
// @lc code=end
