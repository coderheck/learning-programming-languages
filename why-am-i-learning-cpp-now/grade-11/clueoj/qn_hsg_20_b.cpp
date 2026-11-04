#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "qn_hsg_20_b"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=4005;
ll n,a[maxn],res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	if(n<=40){ // sub 1: for n^4
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				for(ll p=j+1;p<=n;p++){
					for(ll q=p+1;q<=n;q++){
						if(a[i]-a[j]==a[p]-a[q]){res++;}
					}
				}
			}
		}
	}else if(n<=400){
		umap<ll,ll>cnt;
		cnt.max_load_factor(0.5);
		for(ll p=1;p<=n;p++){
			ll j=p-1;
			if(j>=1){
				for(ll i=1;i<j;i++){cnt[a[i]-a[j]]++;}
			}
			for(ll q=p+1;q<=n;q++){
				if(cnt.find(a[p]-a[q])!=cnt.end()){
					res+=cnt[a[p]-a[q]];
				}
			}
		}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
