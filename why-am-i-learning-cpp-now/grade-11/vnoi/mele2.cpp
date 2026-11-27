#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
#define tname "mele2"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll h,a,b,c;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>h>>a>>b>>c;
	vector<ll>dp(h+5,0);
	dp[1]=1;
	for(ll i=2;i<=h;i++){
		if(i-a>=1){dp[i]+=dp[i-a];}
		if(i-b>=1){dp[i]+=dp[i-b];}
		if(i-c>=1){dp[i]+=dp[i-c];}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
