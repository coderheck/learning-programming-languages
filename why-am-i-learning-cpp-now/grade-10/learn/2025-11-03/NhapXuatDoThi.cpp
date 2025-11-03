#include <iostream>
#include <vector>
#include <algorithm>

const int MAXN = 1001;

int adjMatrix[MAXN][MAXN];

std::vector<int> adjList[MAXN];

int main() {
	  std::ios_base::sync_with_stdio(false);

  std::cin.tie(NULL);

  int n, m;

	  std::cin >> n >> m;

  for (int k = 0; k < m; ++k) {
	       int u, v;
	       std::cin >> u >> v;

    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;

    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }

  for (int i = 1; i <= n; ++i) {
	       for (int j = 1; j <= n; ++j) {
	         std::cout << adjMatrix[i][j] << (j == n ? "" : " ");
    }
    std::cout << std::endl;
  }
  for (int i = 1; i <= n; ++i) {
	       for (int j = 0; j < adjList[i].size(); ++j) {
	         std::cout << adjList[i][j] << (j == adjList[i].size() - 1 ? "" : " ");
    }
    std::cout << std::endl;
  }

  return 0;
}
