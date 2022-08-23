/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
  string plusOne(string &digits) {
    int len = digits.size();
    if (len == 0) {
      digits.push_back('1');
      return digits;
    }
    if (digits[len - 1] != '1') {
      digits[len - 1] += 1;
      return digits;
    } else {
      digits.pop_back();
      digits = plusOne(digits);
      digits.push_back('0');
    }
    return digits;
  }

  string addBinary(string a, string b) {
    string ans;
    if (a.size() < b.size()) {
      string tmp = b;
      b = a;
      a = tmp;
    }
    while (b != "") {
      if (b[b.size() - 1] == '1') {
        a = plusOne(a);
      }
      ans.push_back(a[a.size() - 1]);
      a.pop_back();
      b.pop_back();
    }
    reverse(ans.begin(), ans.end());
    for (auto c : ans) {
      a.push_back(c);
    }
    return a;
  }
};
// @lc code=end
