#include<bits/stdc++.h>

using namespace std;
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int N = 1e6 + 7;
using lli = long long;
using pii = pair<int, int>;
using pll = pair<lli, lli>;

template<class X, class Y> inline bool minimize(X &_a, Y _b) {return _a > _b ? _a = _b, true : false;}
template<class X, class Y> inline bool maximize(X &_a, Y _b) {return _a < _b ? _a = _b, true : false;}

struct edge {
  int from, to, cap, flow;
  edge(lli u = 0, lli v = 0, lli c = 0) : from(u), to(v), cap(c), flow(0) {}
  inline int residue(void) const {
    return cap - flow;
  }
};

lli a, b, s, t, u, v, c;
vector<lli> par;
vector<edge> edges;
vector<lli> g[1005];

bool find_augmenting_path() {
  fill(par.begin(), par.end(), -1); par[s] = 0;
  queue<lli> q; q.push(s);

  while(!q.empty()) {
    u = q.front(); q.pop();
    if(u == t) return true;
    for(auto id : g[u]) {
      int v = edges[id].to, r = edges[id].residue();
      if(par[v] != -1 || r <= 0) continue;
      par[v] = id;
      q.push(v);
    }
  }
  return false;
}

int main() {
  cin >> a >> b;
  s = 0; t = 1;

  g[u].push_back(edges.size());
  edges.emplace_back(s, t, a + b);
  g[v].push_back(edges.size());
  edges.emplace_back(t, s, 0);

  par.assign(2, 0);
  int mxflow = 0;
  while(find_augmenting_path()) {
    int delta = INF;
    for(u = t; u != s; u = edges[par[u]].from) {
      minimize(delta, edges[par[u]].residue());
    }
    mxflow += delta;
    for(u = t; u != s; u = edges[par[u]].from) {
      edges[par[u] ^ 0].flow += delta;
      edges[par[u] ^ 1].flow -= delta;
    }
  }
  cout << mxflow;
}


