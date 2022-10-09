#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
  // write your code in C++14 (g++ 6.2.0)

  int s = 0;
  int overlaps = 0;
  vector<pair<long long, int>> pp;
  // first is point
  // second is start of end, 0 = start, 1 = end

  for (int i = 0; i < A.size(); i++) {
    pp.push_back(make_pair((long long)i - A[i], 0));
    pp.push_back(make_pair((long long)i + A[i], 1));
  }

  sort(pp.begin(), pp.end());

  for (int i = 0; i < pp.size(); i++) {
    // cout << pp[i].first << ' ' << pp[i].second << endl;
    if (pp[i].second == 0) {
      s += overlaps;
      if (s > 10000000)
        return -1;
      overlaps++;
    } else if (pp[i].second == 1) {
      overlaps--;
    }
  }
  return s;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingFZ7WWM-GUT/
 */
