#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
ll n,m,s=0,a,r,res=0;
unordered_map<ll,ll>cnt;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	cnt[0]=1;
	for(ll i=1;i<=n;i++){
		cin>>a;s+=a;
		r=(s%m+m)%m;
		res+=cnt[r];
		cnt[r]++;
	}
	cout<<res;
}
