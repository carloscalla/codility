#include <vector>

using namespace std;

vector<vector<int>> G;
vector<int> seen;
vector<int> match;

int iteration = -1;

int bpm(int u) {
  for (int v : G[u])
    if (seen[v] != iteration) {
      seen[v] = iteration;
      if (match[v] == -1 || bpm(match[v])) {
        match[v] = u;
        return true;
      }
    }
  return false;
}

int solution(vector<int> &A, vector<int> &B) {
  G.resize(A.size() + 1);
  for (int i = 0; i < A.size(); i++) {
    if (A[i] < G.size())
      G[A[i]].push_back(i);
    if (B[i] < G.size())
      G[B[i]].push_back(i);
  }

  seen.resize(A.size(), -1);
  match.resize(A.size(), -1);

  int sol = 0;
  for (int i = 1; i < G.size(); i++) {
    iteration = i;
    if (bpm(i))
      sol++;
    else
      break;
  }
  return sol + 1;
}

int main() { return 0; }

/**
 * Submission link:
 * https://app.codility.com/demo/results/trainingB7V9GY-GXP/
 */
