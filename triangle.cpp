#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
  // write your code in C++14 (g++ 6.2.0)

  // min array size
  if (A.size() < 3)
    return 0;

  sort(A.begin(), A.end());

  int pos = -1;
  // first positive non-zero
  for (unsigned int i = 0; i < A.size(); i++) {
    if (A[i] > 0) {
      pos = i;
      break;
    }
  }

  if (pos >= 0 && A.size() - pos >= 3) { // positive found && min 3 positives
    if (A.size() - pos > 40) {           // walter godzzz -> no fibonacci
      return 1;
    }

    for (unsigned int i = pos + 2; i < A.size(); i++) {
      if (A[i] < (long long)A[i - 1] + (long long)A[i - 2]) {
        return 1;
      }
    }
  }

  return 0;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingZT57X8-2ET/
 */
