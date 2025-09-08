#include <iostream>
#include <string>
using namespace std;
#define ll long long 
ll n,k;string res("");
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	while(n!=0){
		res+=(n%k)+'0';
		n/=k;
	}
	for(ll i=res.size()-1;i>=0;i--){cout<<res[i];}
}
