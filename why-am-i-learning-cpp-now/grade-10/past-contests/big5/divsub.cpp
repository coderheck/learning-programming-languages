#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
ll n,p,sum=0,res=0;string s;
unordered_map<ll,ll>cnt;
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n>>p>>s;
	if(p==2||p==5){
		for(ll i=0;i<n;i++){
			if(!((s[i]-'0')%p)){res+=i+1;}
		}
		cout<<res;
		return 0;
	}
	cnt[0]=1;
	ll mod=0,pwer=1;
	for(ll i=n-1;i>=0;i--){
		mod=(mod+(s[i]-'0')*pwer)%p;
		pwer=(pwer*10)%p;
		res+=cnt[mod];
		cnt[mod]++;
	}
	cout<<res;
}
