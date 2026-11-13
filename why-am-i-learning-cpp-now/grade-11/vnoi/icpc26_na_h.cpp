#include <cstddef>
#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
#include <ext/pb_ds/tree_policy.hpp> // used with above
#include <iostream>
#include <string>
#include <utility>
using namespace std;
using namespace __gnu_pbds;
#define tname "icpc26_na_h"
#define ll long long 
#define fi first
#define se second
#define pii pair<ll,ll>
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
#define umap gp_hash_table
// const ll maxn=200005,inff=1ll<<62;
ll n,q,P;string s,t;
struct chash{
	size_t operator()(const pii &x)const{return x.fi*31+x.se;}
};
pii newpos(pii cp, const char &d){
	if(d=='U'){
		return {cp.fi,cp.se+1};
	}else if(d=='D'){
		return {cp.fi,cp.se-1};
	}else if(d=='L'){
		return {cp.fi-1,cp.se};
	}else{
		return {cp.fi+1,cp.se};
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q>>s;
	while(q--){
		umap<pair<ll,ll>,bool,chash>vis;
		ll res=0;
		string st=s;ll minx=0,miny=0,maxx=0,maxy=0;
		pii pos;pos.fi=0,pos.se=0;vis[pos]=true;
		cin>>P>>t;
		st.insert(P,t);
		for(ll i=0;i<(ll)st.size();i++){
			pii np=newpos(pos,st[i]);
			ll x=np.fi,y=np.se;
			if(x<minx){minx=x;}
			if(y<miny){miny=y;}
			if(x>maxx){maxx=x;}
			if(y>maxy){maxy=y;}
			vis[np]=true;
			pos=np;
		}
		for(ll i=minx;i<=maxx;i++){
			for(ll j=miny;j<=maxy;j++){
				if(vis[{i,j}]==true){res++;}
			}
		}
		lout(res);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
