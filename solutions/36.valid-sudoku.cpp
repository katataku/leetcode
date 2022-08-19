/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
  bool checkDup(vector<char> vec) {
    sort(vec.begin(), vec.end());
    vector<char>::iterator it = unique(vec.begin(), vec.end());
    return !(it == vec.end());
  }

  bool isValidSudoku(vector<vector<char>> &board) {
    // row
    for (int i = 0; i < 9; i++) {
      vector<char> row = {};
      vector<char> col = {};
      for (int j = 0; j < 9; j++) {
        if (board[i][j] != '.')
          row.push_back(board[i][j]);
        if (board[j][i] != '.')
          col.push_back(board[j][i]);
      }
      if (checkDup(row))
        return false;
      if (checkDup(col))
        return false;
    }
    // sub-box
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        vector<char> box = {};
        for (int k = 0; k < 3; k++) {
          for (int l = 0; l < 3; l++) {
            if (board[(3 * i) + k][(3 * j) + l] != '.')
              box.push_back(board[(3 * i) + k][(3 * j) + l]);
          }
        }
        if (checkDup(box))
          return false;
      }
    }
    return true;
  }
};
// @lc code=end
