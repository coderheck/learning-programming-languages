#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define ll long long 
ll t,x,y,dp[20][2][2][];vector<ll>ds;
ll sol(ll pos,ll sml,ll sum,ll prd){
	if(pos==ds.size()){return prd>=x&&prd<=y;}
	if(dp[]
}
ll f(ll x){
	if(x<=0){return 0;}
	ds.clear();
	while(x){ds.push_back(x%10);d/=10;}
	memset(dp,-1,sizeof dp);
	return sol(0,1,0,1);
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>x>>y;
		cout<<f(b)-f(a-1)<<"\n";
	}
}
