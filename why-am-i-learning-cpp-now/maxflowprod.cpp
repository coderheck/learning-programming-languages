#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long 

struct Edge {
  ll v, rev, cap;
};

struct Dinic {
  ll N;
  vector<vector<Edge>> adj;
  vector<ll> level, it;

  Dinic(ll N) : N(N), adj(N), level(N), it(N) {}

  void addEdge(ll u, ll v, ll cap) {
      Edge a{v, (ll)adj[v].size(), cap};
      Edge b{u, (ll)adj[u].size(), 0};
      adj[u].push_back(a);
      adj[v].push_back(b);
  }

  bool bfs(ll s, ll t) {
    fill(level.begin(), level.end(), -1);
    queue<ll> q;
    q.push(s);
    level[s] = 0;
    while (!q.empty()) {
      ll u = q.front(); q.pop();
      for (auto &e : adj[u]) {
        if (e.cap > 0 && level[e.v] == -1) {
          level[e.v] = level[u] + 1; q.push(e.v);
        }
      }
    }
    return level[t] != -1;
  }

  long long dfs(ll u, ll t, long long f) {
    if (u == t) return f;
    for (ll &i = it[u]; i < (ll)adj[u].size(); i++) {
      Edge &e = adj[u][i];
      if (e.cap > 0 && level[e.v] == level[u] + 1) {
        long long ret = dfs(e.v, t, min(f, e.cap));
        if (ret > 0) {
          e.cap -= ret;
          adj[e.v][e.rev].cap += ret;
          return ret;
        }
      }
    }
    return 0;
  }

  long long maxflow(ll s, ll t) {
    ll flow = 0, f;
    while (bfs(s, t)) {
      fill(it.begin(), it.end(), 0);
      while((f = dfs(s, t, LLONG_MAX)) > 0){flow += f;}
    }
    return flow;
  }
};

int main(){
  cin.tie(nullptr)->sync_with_stdio(false);

  long long a, b, neg, verify;
  cin >> a >> b;
  verify = a * b;
  neg = a < 0 ^ b < 0 ? -1 : 1;
  a *= (a < 0) ? -1 : 1; b *= (b < 0) ? -1 : 1;

  // Optimization: ensure smaller side is 'a'
  if (a > b) swap(a, b);

  ll source = 0;
  ll sink = 1 + a + b; 
  Dinic dinic(sink + 1);

  // Source -> left nodes
  for (ll i = 1; i <= a; i++) {
    dinic.addEdge(source, i, b);
  }

  // Right nodes -> sink
  for (ll j = 1; j <= b; j++) {
    dinic.addEdge(a + j, sink, a);
  }

  // Left -> right (capacity 1 each)
  for (ll i = 1; i <= a; i++) {
    for (ll j = 1; j <= b; j++) {
      dinic.addEdge(i, a + j, 1);
    }
  }

  long long product = dinic.maxflow(source, sink);
  cout << product * neg << "\nVerify: " << verify;
}
