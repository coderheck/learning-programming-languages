#include <bits/stdc++.h>
using namespace std;

int n;
int dx[5] = {0, 0, 0, -1, 1};
int dy[5] = {0, -1, 1, 0, 0};

int toggle(int state, int x, int y) {
    int pos = x * n + y;
    state ^= (1 << pos);
    for (int k = 1; k < 5; k++) {
        int nx = x + dx[k], ny = y + dy[k];
        if (nx >= 0 && nx < n && ny >= 0 && ny < n)
            state ^= (1 << (nx * n + ny));
    }
    return state;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
	if(fopen("clighs.inp","r")){
		freopen("clighs.inp", "r", stdin);
		freopen("clighs.out", "w", stdout);
	}

    cin >> n;
    int start = 0, target = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (x) start |= (1 << (i * n + j));
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (x) target |= (1 << (i * n + j));
        }
    }

    if (start == target) {
        cout << 0;
        return 0;
    }

    queue<pair<int,int>> q;
    unordered_map<int,int> dist;

    q.push({start, 0});
    dist[start] = 0;

    while (!q.empty()) {
        pair<int,int> t = q.front(); q.pop();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int nxt = toggle(t.first, i, j);
                if (!dist.count(nxt)) {
                    dist[nxt] = t.second + 1;
                    if (nxt == target) {
                        cout << t.second + 1;
                        return 0;
                    }
                    q.push({nxt, t.second + 1});
                }
            }
        }
    }

    cout << -1;
}
