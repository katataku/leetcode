/*
 * @lc app=leetcode id=804 lang=cpp
 *
 * [804] Unique Morse Code Words
 */

// @lc code=start
class Solution {
public:
  vector<string> word_list = {
      ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
      ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
      "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.."};

  int uniqueMorseRepresentations(vector<string> &words) {
    set<string> set;
    for (auto word : words) {
      string morse = "";
      for (char c : word) {
        morse += word_list[c - 'a'];
      }
      set.insert(morse);
    }
    return set.size();
  }
};
// @lc code=end
