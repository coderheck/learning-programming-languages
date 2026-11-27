#include <iostream>
#include <algorithm>
using namespace std;
#define tname "icpc26_mt_f"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62;
ll maxx=-inff,maxy=-inff,minx=inff,miny=inff;
void ppp(const ll &x,const ll &y){
	maxx=max(maxx,x);
	maxy=max(maxy,y);
	minx=min(minx,x);
	miny=min(miny,y);
}
void rec(const ll &x1,const ll &y1,const ll &x2,const ll &y2){
	maxx=max(maxx,x2);
	maxy=max(maxy,y2);
	minx=min(minx,x1);
	miny=min(miny,y1);
}
void cir(const ll &x,const ll &y,const ll &r){
	maxx=max(maxx,x+r);
	maxy=max(maxy,y+r);
	minx=min(minx,x-r);
	miny=min(miny,y-r);
}
ll T;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		maxx=-inff,maxy=-inff,minx=inff,miny=inff;
		ll n,m,q;cin>>n>>m>>q;
		for(ll i=1,x,y;i<=n;i++){
			cin>>x>>y;
			ppp(x,y);
			// lout("ppp: "<<i<<": "<<maxx<<" "<<minx<<" "<<maxy<<" "<<miny);
		}
		for(ll i=1,x1,y1,x2,y2;i<=m;i++){
			cin>>x1>>y1>>x2>>y2;
			rec(x1,y1,x2,y2);
			// lout("rec: "<<i<<": "<<maxx<<" "<<minx<<" "<<maxy<<" "<<miny);
		}
		for(ll i=1,x,y,r;i<=q;i++){
			cin>>x>>y>>r;
			cir(x,y,r);
			// lout("cir: "<<i<<": "<<maxx<<" "<<minx<<" "<<maxy<<" "<<miny);
		}
		ll len=max(maxx-minx,maxy-miny);
		lout(len*len);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
