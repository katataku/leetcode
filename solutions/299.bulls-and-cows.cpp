/*
 * @lc app=leetcode id=299 lang=cpp
 *
 * [299] Bulls and Cows
 */

// @lc code=start
class Solution {
public:
  string getHint(string secret, string guess) {
    int n = secret.size();
    vector<int> unused_secret(10);
    vector<int> unused_guess(10);
    int bulls = 0;
    int cows = 0;

    for (int i = 0; i < n; i++) {
      if (secret[i] == guess[i]) {
        bulls += 1;
      } else {
        unused_secret[(secret[i] - '0')] += 1;
        unused_guess[(guess[i]) - '0'] += 1;
      }
    }
    for (int i = 0; i < 10; i++) {
      cows += min(unused_secret[i], unused_guess[i]);
    }
    string ans;
    ans += to_string(bulls);
    ans += "A";
    ans += to_string(cows);
    ans += "B";
    return ans;
  }
};
// @lc code=end
