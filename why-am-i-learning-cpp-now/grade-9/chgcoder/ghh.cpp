#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll n,a,t=0;vector<ll>d(1000005,0),res;
int main(){
	for(ll i=1;i<=1000000;i++){
		for(ll j=i;j<=1000000;j+=i){d[j]+=i;}
	}
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>a;
		if(2*a<=d[a]){res.push_back(a);}
	}
	cout<<res.size()<<"\n";
	for(ll i=0;i<res.size();i++){cout<<res[i]<<"\n";}
}
