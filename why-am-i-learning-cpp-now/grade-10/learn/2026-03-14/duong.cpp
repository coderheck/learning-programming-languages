#include<iostream>
#include<vector>
#include<queue>
#include<random>
#include<chrono>
using namespace std;
#define tname "duong"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define getbit(x,k) (((x)>>(k))&1)
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n"
const ll maxN=10005,inff=100000000007;
ll n,m,k,pre=-1;
struct edge{
    ll v,p,q;
    bool operator<(const edge &rhs)const{return p>rhs.p;}
};
bool sub2=true;
vector<vector<edge>>g(maxN);
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m>>k;
    for(ll i=1,u,v,p,q;i<=m;i++){
        cin>>u>>v>>p>>q;
        g[u].push_back({v,p,q});g[v].push_back({u,p,q});
        sub2=sub2&&(pre==-1?true:q-p==pre);
        pre=q-p;
    }
    if(n<=10&&m<=20&&k==1){
        // sub 1: trâu
        ll s,t;cin>>s>>t;
        vector<vector<ll>>res;
        queue<ll>q;
        q.push(s);
    }else if(n<=100&&m<=1000&&k<=10&&sub2){
        // sub 2: q-p == const
        vector<ll>d(n+5,inff);
        for(ll q=1,s,t,errdel,erradd;q<=k;q++){
            cin>>s>>t;
            priority_queue<edge>pq;
            d.assign(n+5,inff);
            pq.push({s,0,0}),d[s]=0;
            while(pq.size()){
                ll u=pq.top().v,p=pq.top().p,q=pq.top().q;pq.pop();
                if(q>erradd){erradd=q,errdel=p;}
                if(u==t){}
                for(const edge &nx:g[u]){
                    ll v=nx.v,vp=nx.p,vq=nx.q;
                }
            }
        }
    }
    lout(0);
}
