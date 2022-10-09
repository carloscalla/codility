#include <iostream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
  stack<pair<int, int>> s;

  for (int i = 0; i < A.size(); i++) {
    if (s.empty() || s.top().first == A[i])
      s.push(make_pair(A[i], i));
    else {
      s.pop();
    }
  }

  if (s.empty())
    return -1;

  int temp = s.top().first;
  int c = 0;

  for (int &i : A) {
    if (i == temp) {
      c++;
      if (c > A.size() / 2)
        return s.top().second;
    }
  }

  return -1;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingDJ9VXF-U3X/
 */
