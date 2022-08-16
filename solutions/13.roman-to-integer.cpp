/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
  int romanToInt(string s) {
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      if (c == 'I') {
        if (i < s.length() - 1 && s[i + 1] == 'V') {
          ans -= 1;
        } else if (i < s.length() - 1 && s[i + 1] == 'X') {
          ans -= 1;
        } else {
          ans += 1;
        }
      }
      if (c == 'V') {
        ans += 5;
      }
      if (c == 'X') {
        if (i < s.length() - 1 && s[i + 1] == 'L') {
          ans -= 10;
        } else if (i < s.length() - 1 && s[i + 1] == 'C') {
          ans -= 10;
        } else {
          ans += 10;
        }
      }
      if (c == 'L') {
        ans += 50;
      }
      if (c == 'C') {
        if (i < s.length() - 1 && s[i + 1] == 'D') {
          ans -= 100;
        } else if (i < s.length() - 1 && s[i + 1] == 'M') {
          ans -= 100;
        } else {
          ans += 100;
        }
      }
      if (c == 'D') {
        ans += 500;
      }
      if (c == 'M') {
        ans += 1000;
      }
    }

    return ans;
  }
};
// @lc code=end
