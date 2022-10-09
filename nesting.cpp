#include <iostream>
#include <stack>
#include <string>

using namespace std;

int solution(string &S) {
  // write your code in C++14 (g++ 6.2.0)
  stack<char> st;

  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '(' || S[i] == '[' || S[i] == '{') {
      st.push(S[i]);
    } else {
      if (st.empty())
        return 0;
      char t = st.top();
      if ((S[i] == ')' && t == '(') || (S[i] == ']' && t == '[') ||
          (S[i] == '}' && t == '{')) {
        st.pop();
      } else
        return 0;
    }
  }

  return st.empty() ? 1 : 0;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingXZKXPA-U74/
 */
