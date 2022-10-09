#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
  unsigned int len = A.size();

  if (len == 3)
    return A[0] * A[1] * A[2];

  sort(A.begin(), A.end());

  int a = 0, b = 0, c = 0, d = 0;

  a = A[0] * A[1] * A[2];                   // first 3
  b = A[0] * A[1] * A[len - 1];             // first 2 + last
  c = A[len - 3] * A[len - 2] * A[len - 1]; // last 3
  d = A[0] * A[len - 2] * A[len - 1];       // last 2 + first

  return max({a, b, c, d});
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingBSS652-STP/
 */
