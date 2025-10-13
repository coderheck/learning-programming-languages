#include <iostream>
#include <unordered_map>
#include <random>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=300005;
const ll modN=1000000007;
ll n,hh=0,t=0,res=0,x,m,a[maxN],cnt[maxN],h0[maxN],h1[maxN],h2[maxN];
umap<ll,ll>f,s;
mt19937_64 r;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	f[0]=1;
	cin>>n;
	for(ll i=1;i<=n;i++){h0[i]=r(),h1[i]=r(),h2[i]=r();}
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		x=a[i],m=cnt[x]%3;
		if(!m){hh+=h1[x];}else if(m&1){hh+=h2[x]-h1[x];}else{hh+=h0[x]-h2[x];}
		cnt[x]++;
		t=(f[hh]+s[hh])%modN,res=(res+t)%modN,s[hh]=(s[hh]+t)%modN;
		f[hh]++;
	}
	cout<<res;
}

