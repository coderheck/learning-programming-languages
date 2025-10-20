#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,m,a[1000005];umap<ll,ll>cnt;
void broke(){
	for(ll i=1;i<=n;i++){cin>>a[i];if(!cnt[a[i]]){cnt[a[i]]=i;}}
	for(ll i=1;i<=n;i++){
		if(cnt[m-a[i]]){cout<<cnt[a[i]]<<" "<<cnt[m-a[i]];return;}
	}
	cout<<-1;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){
		for(ll j=i+1;j<n;j++){
			if(a[j]==m-a[i]){cout<<i+1<<" "<<j+1;return(1==0);}
		}
	}
	cout<<-1;
}
