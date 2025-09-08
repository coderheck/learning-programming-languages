#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> W(N + 1), V(N + 1);
    for (int i = 1; i <= N; ++i) {cin >> W[i] >> V[i];}
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (W[i] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
            }
        }
    }
    int max_value = dp[N][M];
    cout << max_value << "\n";
    vector<int> selected;
    int remaining_weight = M;
    for (int i = N; i >= 1; --i) {
        if (dp[i][remaining_weight] != dp[i - 1][remaining_weight]) {
            selected.push_back(i);
            remaining_weight -= W[i];
        }
    }
    sort(selected.begin(), selected.end());
    for (int i = 0; i < selected.size(); ++i) {
        cout << selected[i] << " ";
    }
}
