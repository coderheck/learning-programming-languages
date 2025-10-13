#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
using ll=long long;
ll a,b,dp[20][2][20];vector<ll>ds;
ll sol(ll pos,ll sml,ll lst){
	if(pos==ds.size()){return 1;}
	if(dp[pos][sml][lst]!=-1){return dp[pos][sml][lst];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		if(lst==1&&d==3){continue;}
		res+=sol(pos+1,sml&&(d==lim),d);
	}
	return dp[pos][sml][lst]=res;
}
ll f(ll x){
	if(x<0){return 0;}
	if(!x){return 1;}
	ds.clear();
	while(x){ds.push_back(x%10);x/=10;}
	reverse(ds.begin(),ds.end());
	memset(dp,-1,sizeof(dp));
	return sol(0,1,10);
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	while(cin>>a>>b){
		cout<<f(b)-f(a-1)<<"\n";
	}
}
