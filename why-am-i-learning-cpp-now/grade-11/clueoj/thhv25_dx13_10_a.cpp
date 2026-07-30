// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <string>
using namespace std;
#define tname "thhv25_dx13_10_a"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,modN=1000000007;
ll n,res=0,a[maxN],b[maxN],maxmask;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	if(n<=20){
		maxmask=1<<n;
		for(ll m=1,sz,yes;m<maxmask;m++){
			sz=0;yes=1;
			for(ll i=0;i<n;i++){
				if(m&(1<<i)){b[sz++]=a[i];}
			}
			for(ll i=1;i<sz;i++){
				if(b[i]<b[i-1]){yes=0;break;}
			}
			if(yes){res=(res+1)%modN;}
		}
		lout(res);
	}
}
