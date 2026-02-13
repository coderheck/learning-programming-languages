#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;
#define tname "bai3"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=500005;
ll n,m,a[maxN],b[maxN],p[maxN],q[maxN],p1[maxN],p2[maxN];
struct edge{
    ll v,w1,w2;
    bool operator<(const edge &rhs)const{return w1>rhs.w1;}
};
struct ee{
    ll v,w;
    bool operator<(const ee &rhs)const{return w>rhs.w;}
};
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    vector<vector<edge>>gr(n+5);
    vector<ll>dp(n+5,LLONG_MAX),dq(n+5,LLONG_MAX),dd(n+5,LLONG_MAX);
    for(ll i=1;i<=m;i++){
        // ll u,v,x,y;cin>>u>>v>>x>>y;
        cin>>a[i]>>b[i]>>p[i]>>q[i];
        gr[b[i]].push_back({a[i],p[i],q[i]});
    }
    priority_queue<ee>pq;
    dp[n]=0,pq.push({n,0});
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(du!=dp[u]){continue;}
        for(const edge &nx:gr[u]){
            ll v=nx.v,dv=nx.w1;
            if(dp[v]>du+dv){dp[v]=du+dv,pq.push({v,dp[v]});p1[v]=u;}
        }
    }
    dq[n]=0,pq.push({n,0});
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(du!=dq[u]){continue;}
        for(const edge &nx:gr[u]){
            ll v=nx.v,dv=nx.w2;
            if(dq[v]>du+dv){dq[v]=du+dv,pq.push({v,dq[v]});p2[v]=u;}
        }
    }
    vector<vector<edge>>gg(n+5);
    for(ll i=1;i<=m;i++){
        ll u=a[i],v=b[i],cc=0;
        if(dp[u]!=p[i]+dp[v]){cc++;}
        if(dq[u]!=q[i]+dq[v]){cc++;}
        gg[u].push_back({v,cc});
    }
    dd[1]=0,pq.push({1,0});
    ll par[maxN];
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(du!=dd[u]){continue;}
        for(const edge &nx:gg[u]){
            ll v=nx.v,dv=nx.w1;
            if(dd[v]>du+dv){dd[v]=du+dv,pq.push({v,dd[v]});par[v]=u;}
        }
    }
    lout(dd[n]);
    for(ll u=n;u!=0;u=par[u]){cerr<<u;if(par[u]){cerr<<" <- ";}}
    cerr<<"\n";
    for(ll u=1;u!=0;u=p1[u]){cerr<<u;if(p1[u]){cerr<<" -> ";}}
    cerr<<"\n";
    for(ll u=1;u!=0;u=p2[u]){cerr<<u;if(p2[u]){cerr<<" -> ";}}
}
