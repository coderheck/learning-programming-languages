// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "candy"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll inff=1LL<<62;
ll m,T,d[105],n[205],t[205],res;
void dfs(ll pos,ll rem){
    if(pos==m){
        t[m]=rem;
        ll cc=0,s;
        for(ll i=1;i<=m;i++){
            s=0;
            for(ll j=1;j<=m;j++){if(t[j]<t[i]){s++;}}
            cc+=d[i]*s;
        }
        res=min(res,cc);
        return;
    }
    // để lại ít nhất 1 viên cho mỗi bạn phía sau
    for(ll x=1;x<=rem-(m-pos);x++){
        t[pos]=x;
        dfs(pos+1,rem-x);
    }
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>T;
	for(ll i=1;i<=m;i++){cin>>d[i];}
	for(ll i=1;i<=T;i++){
		cin>>n[i];res=inff;
		dfs(1,n[i]);
		oout(res);
	}
}
