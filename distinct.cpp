#include <set>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
  // write your code in C++14 (g++ 6.2.0)
  set<int> s;

  for (unsigned int i = 0; i < A.size(); i++) {
    s.insert(A[i]);
  }

  return s.size();
}

/*
 * Submission link:
 * https://app.codility.com/demo/results/training4PKQ26-ANC/
 */
