#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define TASKNAME "stn"
const ll maxN=1000000;
ll q,l,r;
int main(){
	if(fopen(TASKNAME".inp","r")){
		freopen(TASKNAME".inp","r",stdin);
		freopen(TASKNAME".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	vector<ll>d(maxN+5,0),dp(maxN+5,0);
	for(ll i=1;i<=maxN;i++){
		for(ll j=i;j<=maxN;j+=i){d[j]+=i;}
	}
	for(ll i=1;i<=maxN;i++){dp[i]=dp[i-1]+(i<=d[i]-i);}
	cin>>q;
	while(q--){
		cin>>l>>r;
		cout<<dp[r]-dp[l-1]<<"\n";
	}
}
