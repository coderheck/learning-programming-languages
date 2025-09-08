#include <iostream>
#include <string>
// #include <vector>
using namespace std;
#define ll long long 
const ll maxN=10005;
ll n,res=1,st=0;string s;
void computeString(){
	for(ll i=0;i<n;i++){
		ll l=i,r=i;
		while(l>=0&&r<n&&s[l]==s[r]){
			if(r-l+1>res){
				res=r-l+1;st=l;
			}else if(r-l+1==res){
				string cur=s.substr(l,res),pre=s.substr(st,res);
				if(cur>pre){st=l;}
			}
			l--;r++;
		}
		l=i,r=i+1;
		while(l>=0&&r<n&&s[l]==s[r]){
			if(r-l+1>res){
				res=r-l+1;st=l;
			}else if(r-l+1==res){
				string cur=s.substr(l,res),pre=s.substr(st,res);
				if(cur>pre){st=l;}
			}
			l--;r++;
		}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s;
	if(!n){cout<<"0\n";return 0;}
	computeString();
	cout<<res<<"\n";
	if(res){cout<<s.substr(st,res);}
}
// vector<vector<bool>>dp(n+5,vector<bool>(n+5,false));
// for(ll i=0;i<n;i++){dp[i][i]=true;}
// for(ll i=0;i<n-1;i++){
// 	if(s[i]==s[i+1]){
// 		dp[i][i+1]=true;
// 		res=2;st=i;
// 	}
// }
// for(ll l=3;l<=n;l++){
// 	for(ll i=0;i<=n-l;i++){
// 		ll j=i+l-1;
// 		if(s[i]==s[j]&&dp[i+1][j-1]){
// 			dp[i][j]=true;
// 			if(l>res){
// 				res=l;st=i;
// 			}else if(l==res){
// 				string cur=s.substr(i,l),pre=s.substr(st,res);
// 				if(cur>pre){st=i;}
// 			}
// 		}
// 	}
// }
// cout<<res<<"\n"<<s.substr(st,res);
