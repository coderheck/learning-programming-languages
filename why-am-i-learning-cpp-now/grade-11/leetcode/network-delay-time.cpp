#include <bits/stdc++.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
class Solution {
private:
	const int inff = (1<<30)+1;
	struct edge {
		int v,w;
		bool operator < (const edge &rhs) const {return w > rhs.w;}
	};
    void dijk(vector<vector<edge>> &g, vector<int> &d, int k){
		priority_queue<edge> pq;
		pq.push({k, 0});
		d[k] = 0;
		while (pq.size()) {
			int u = pq.top().v, du = pq.top().w; pq.pop();
			if (d[u] != du) {continue;}
			for (const edge &nx : g[u]) {
				int v = nx.v, dv = nx.w;
				if (d[v] > du + dv) {
					d[v] = du + dv;
					pq.push({v, d[v]});
				}
			}
		}
	}
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
		vector<vector<edge>> g(n + 5);
		vector<int> d(n + 5, inff);
		for(const vector<int> &e:times){
			g[e[0]].push_back({e[1], e[2]});
		}
		dijk(g, d, k);
		int res = 0;
		for (int i=1; i<=n; i++) {
			if (d[i] == inff) {res = -1; break;}
			res = max(res, d[i]);
		}
        return res;
    }
};
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n=2,k=1;
	vector<vector<int>>times={{1,2,1}};
	Solution sol;
	cout<<sol.networkDelayTime(times,n,k);
}
