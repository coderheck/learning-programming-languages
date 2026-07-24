// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define tname "tsp"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=16,inff=1LL<<62;
ll n,c[maxN][maxN],x[16],cnt[16],res=1LL<<31,cur=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){cin>>c[i][j];}
	}

	vector<int>a;
	for(ll i=1;i<n;i++){a.push_back(i);}

	do{
		cur=c[0][a[0]] + c[a[n-2]][0];
		for(ll i=1;i<=n-2;i++){cur+=c[a[i-1]][a[i]];}
		res=min(res,cur);
	}while(next_permutation(a.begin(),a.end()));
	lout(res);
}

