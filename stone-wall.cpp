#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int solution(vector<int> &H) {
  stack<int> s;
  int sol = 0;

  for (int &i : H) {

    while (!s.empty() && s.top() > i) {
      s.pop();
    }
    if (s.empty() || s.top() < i) {
      s.push(i);
      sol++;
    }
  }

  return sol;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingVGZUGE-KE3/
 */
