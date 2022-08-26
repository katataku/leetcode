/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue {
public:
  deque<int> que;
  MyQueue() {}

  void push(int x) { this->que.push_front(x); }

  int pop() {
    int ans = this->que.back();
    this->que.pop_back();
    return ans;
  }

  int peek() { return this->que.back(); }

  bool empty() { return (this->que.size() == 0); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
