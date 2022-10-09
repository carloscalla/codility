#include <iostream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int solution(vector<int> &A, vector<int> &B) {
  stack<int> s;

  for (int i = 0; i < A.size(); i++) {
    if (s.empty() || B[i] == 1 || B[i] == B[s.top()])
      s.push(i);
    else {
      // B[i] == 0
      // s not empty
      // B[i] != B[s.top()]
      // -> B[s.top()] == 1
      // if (A[s.top()] > A[i]) continue;
      while (!s.empty() && B[s.top()] == 1 && A[i] > A[s.top()]) {
        s.pop();
      }
      if (s.empty() || B[s.top()] == 0) {
        s.push(i);
      }
    }
  }

  return s.size();
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingUKT22H-HZP/
 */
