// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "table"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=405,inff=1LL<<62;
ll a[maxN][maxN],m,n,res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){cin>>a[i][j];}
	}
	if(m<=20&&n<=20){
		// sub 1: trâu duyệt mọi m,n và check mọi giá trị trong a[m,n]
		for(ll x1=1;x1<=m;x1++){
			for(ll y1=1;y1<=n;y1++){
				for(ll x2=x1;x2<=m;x2++){
					for(ll y2=y1;y2<=n;y2++){
						// góc trái trên (x1,y1), góc phải dưới (x2,y2)
						ll cnt[maxN]={false},ok=true;
						for(ll u=x1;ok&&u<=x2;u++){
							for(ll v=y1;v<=y2;v++){
								if(cnt[a[u][v]]){ok=false;break;}
								cnt[a[u][v]]=true;
							}
						}
						if(ok && res<(x2-x1+1)*(y2-y1+1)){
							res=(x2-x1+1)*(y2-y1+1);
						}
					}
				}
			}
		}
	}
	lout(res);
}
