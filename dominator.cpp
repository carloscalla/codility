#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
  unordered_map<int, int> m; // value, count

  for (int i = 0; i < A.size(); i++) {
    m[A[i]]++;
    if (m[A[i]] > A.size() / 2) {
      return i;
    }
  }

  return -1;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingVW9B39-7FQ/
 */
