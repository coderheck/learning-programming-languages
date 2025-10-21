#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long 
const ll modN=1000000007;
ll h,w,a;string row;
int main(){
	if(fopen("atcoder_dp_h.inp","r")){
		freopen("atcoder_dp_h.inp","r",stdin);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>h>>w;
	vector<string>a(h+1);
	vector<vector<int>>dp(h+5,vector<int>(w+5,0));
	for(ll i=1;i<=h;i++){cin>>a[i];a[i]="^"+a[i];}
	dp[1][1]=1;
	for(ll i=1;i<=h;i++){
		for(ll j=1;j<=w;j++){
			if(a[i][j]=='#'){continue;}
			if(i>1){dp[i][j]=(dp[i][j]+dp[i-1][j])%modN;}
			if(j>1){dp[i][j]=(dp[i][j]+dp[i][j-1])%modN;}
		}
	}
	cout<<dp[h][w];
}
