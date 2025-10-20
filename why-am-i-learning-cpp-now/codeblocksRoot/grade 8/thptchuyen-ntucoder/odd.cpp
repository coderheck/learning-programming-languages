#include"bits/stdc++.h"
using namespace std;
#define ll long long
map<ll,ll>dem;
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		dem[a]++;
	}
	for(auto i:dem){
		if(i.second%2==1){cout<<i.first;}
	}
}