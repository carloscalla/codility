#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int solution(vector<int> &A) {

  if (A.empty())
    return -1;

  vector<pair<int, int>> pp;

  for (int i = 0; i < A.size(); i++) {
    pp.push_back(make_pair(A[i], i));
  }

  sort(pp.begin(), pp.end());

  int c = 0;
  int temp = pp[0].first;
  for (pair<int, int> &p : pp) {
    if (temp == p.first) {
      c++;
      if (c > A.size() / 2)
        return p.second;
    } else {
      c = 1;
      temp = p.first;
    }
  }

  return -1;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingMGQRJF-J3B/
 */
