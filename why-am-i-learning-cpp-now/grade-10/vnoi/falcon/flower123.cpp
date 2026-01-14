#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
#define tname "flower123"
#define ll long long
#define debug(x) cout<<(x)<<" ";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll inff=1000000000007;
ll w,h,n,k,dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
struct pll{ll x,y;};
vector<pll>fl;
ll solve(const ll &x,const ll &y){
	ll sum=0;
	for(const pll &p:fl){
		ll d=abs(p.x-x)+abs(p.y-y);
		if(d<k){sum+=(k-d);}
	}
	return sum;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>w>>h>>n>>k;
    if(n==1){
        ll x,y,res=inff;cin>>x>>y;
        for(ll i=1;i<=w;i++){
            for(ll j=1;j<=h;j++){
                ll tm=k-(abs(x-i)+abs(y-j));
                if(tm<=0){
                    cout<<"0";return 0;
                }else{
                    res=min(res,tm);
                }
            }
        }
        cout<<res;
        return 0;
    }
	vector<vector<ll>>g(w+5,vector<ll>(h+5,-1));
	queue<pll>q;
	ll res=inff;
	for(ll i=1;i<=n;i++){
		ll x,y;cin>>x>>y;
		// fl.push_back({x,y});
		q.push({x,y}),g[x][y]=0;
	}
	while(q.size()){
		ll x=q.front().x,y=q.front().y,cdist=g[x][y];q.pop();
		if(cdist>=k){continue;}
		for(ll i=0;i<4;i++){
			ll u=x+dx[i],v=y+dy[i];
			if(u>=1&&u<=w&&v>=1&&v<=h&&g[u][v]==-1){
				g[u][v]=cdist+1,q.push({u,v});
			}
		}
	}
	for(ll i=1;i<=w;i++){
		for(ll j=1;j<=h;j++){
			ll fire=k-g[i][j];
			if(fire<=0){cout<<"0";cerr<<"0";return 0;}
			if(fire<res){res=fire;}
		}
	}
	cout<<res;
	cerr<<res;
}
