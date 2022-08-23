/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
  int lengthOfLastWord(string s) {
    while (s[s.size() - 1] == ' ') {
      s.pop_back();
    }
    vector<int> len_list;
    string::iterator itr;
    string::iterator pre;
    pre = s.begin();
    itr = find(s.begin(), s.end(), ' ');
    while (itr != s.end()) {
      int dist = itr - pre;
      if (dist > 0)
        len_list.push_back(dist - 1);
      pre = itr + 1;
      itr = find(itr + 1, s.end(), ' ');
    }
    int dist = itr - pre;
    if (dist > 0)
      len_list.push_back(dist);
    return len_list[len_list.size() - 1];
  }
};
// @lc code=end
