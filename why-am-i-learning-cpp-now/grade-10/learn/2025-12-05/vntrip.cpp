#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<climits>
using namespace std;
#define ll long long 
#define tname "vntrip"
const ll maxN=1005,inff=10000000007;
ll n,m,k,res=0,r,s[maxN];
struct edge{
    ll v,w;
    bool operator<(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g(maxN);
ll ijk(const ll& st,const ll& nd){
    priority_queue<edge>pq;
    vector<ll>d(n+5,LLONG_MAX-5);
    pq.push({st,0}),d[st]=0;
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(du!=d[u]){continue;}
        if(u==nd){return du;}
        for(const edge &nx:g[u]){
            ll v=nx.v,dv=nx.w;
            if(d[v]>du+dv){
                d[v]=du+dv,pq.push({v,d[v]});
            }
        }
    }
    return -1;
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m>>k;
    for(ll i=1;i<=k;i++){cin>>s[i];}
    for(ll i=1;i<=m;i++){
        ll u,v,c;cin>>u>>v>>c;
        g[u].push_back({v,c});
    }
    for(ll i=1;i<=k;i++){
        if(i==1){r=ijk(1,s[i]);}else{r=ijk(s[i-1],s[i]);}
        if(r==-1){cout<<(i==1?1:s[i-1])<<" "<<s[i]<<" "<<"-1";return 0;}
        // if(r==-1){cout<<"-1";return 0;}
        cout<<(i==1?1:s[i-1])<<" "<<s[i]<<" "<<r<<"\n";
        res+=r;
    }
    r=ijk(s[k],1);
    cout<<s[k]<<" "<<1<<" "<<r<<"\n";
    cout<<(r==-1?-1:res+r);
}