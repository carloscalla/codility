#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int> &A) {

  // find leader
  unordered_map<int, int> m; // value, count
  int leader = -2000000000;

  for (int i = 0; i < A.size(); i++) {
    m[A[i]]++;
    if (m[A[i]] > A.size() / 2) {
      leader = A[i];
    }
  }

  if (leader == -2000000000)
    return 0; // no leader

  int lcount = 0;
  int sol = 0;
  for (int i = 0; i < A.size() - 1; i++) {
    if (A[i] == leader)
      lcount++;
    if (lcount > (i + 1) / 2 && (m[leader] - lcount) > (A.size() - i - 1) / 2)
      sol++;
  }

  return sol;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingDWMVSN-N9N/
 */
