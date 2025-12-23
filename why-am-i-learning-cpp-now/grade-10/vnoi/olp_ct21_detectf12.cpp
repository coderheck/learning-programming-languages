#include <iostream>
// #include <cmath>
// #include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
#define tname "olp_ct21_detectf12"
const ll maxN=1005;
ll n,f0,d,res,ppc=0,pp1c=0,res1=0,res2=0,pp1[maxN];
struct pos{ll x,y;}pp[maxN];
bool ff1[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>f0>>d;
	pp[ppc++]={-1,-1}; // pad để lấy index 1
	for(ll i=1;i<=n;i++){
		ll x,y;cin>>x>>y;
		pp[ppc++]={x,y};
	}
	for(ll i=1;i<=n;i++){
		if(i==f0){continue;}
		ll dx=pp[i].x-pp[f0].x,dy=pp[i].y-pp[f0].y;
		if(dx*dx+dy*dy<=d*d){
			res1++,ff1[i]=true,pp1[pp1c++]=i;
		}
	}
	for(ll i=1;i<=n;i++){
		if(i==f0){continue;}
		if(ff1[i]){continue;}
		for(ll j=0;j<pp1c;j++){
			ll dx=pp[i].x-pp[j].x,dy=pp[i].y-pp[j].y;
			if(dx*dx+dy*dy<=d*d){res2++;break;}
		}
	}
	cout<<res1<<" "<<res2;
}
