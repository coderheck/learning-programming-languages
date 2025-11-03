#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxN = 10005;
int n, m, u, v;
bool vis[maxN];
vector<vector<int>> adj(maxN);

int dfs(int u) {
    if (vis[u]) return 0;
    vis[u] = true;
    int count = 1; // Đếm chính đỉnh u
    for (int v : adj[u]) {
        count += dfs(v);
    }
    return count;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> components;
    
    // Tìm tất cả các thành phần liên thông
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            int comp_size = dfs(i);
            components.push_back(comp_size);
        }
    }
    
    // Sắp xếp các thành phần giảm dần
    sort(components.rbegin(), components.rend());
    
    int res = components[0]; // Thành phần lớn nhất
    
    // Nếu có ít nhất 2 thành phần, có thể kết nối thành phần lớn nhất với thành phần lớn thứ hai
    if (components.size() > 1) {
        res += components[1];
    }
    
    cout << res;
    return 0;
}
