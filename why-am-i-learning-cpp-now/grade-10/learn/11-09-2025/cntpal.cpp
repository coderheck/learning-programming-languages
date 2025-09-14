#include <iostream>
#include <string>
using namespace std;
#define ll long long 
#define frt(u,v) ((h1[v]-h1[u-1]*p[v-u+1]%modN+modN)%modN)
#define bck(u,v) ((h2[u]-h2[v+1]*p[v-u+1]%modN+modN)%modN)
const ll maxN=5005;
const ll modN=1000000007;
const ll baseN=31;
ll n,q,l,r,h1[maxN],h2[maxN],p[maxN];string s;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>s>>q;
	n=s.size(),p[0]=1,h1[0]=h2[n]=0;
	s="#"+s;
	for(ll i=1;i<=n;i++){p[i]=(p[i-1]*baseN)%modN;}
	for(ll i=1;i<=n;i++){h1[i]=(h1[i-1]*baseN+s[i])%modN;}
	for(ll i=n;i>=1;i--){h2[i]=(h2[i+1]*baseN+s[i])%modN;}
	while(q--){
		cin>>l>>r;
		ll t=0;
		for(ll i=l;i<=r;i++){
			for(ll j=i;j<=r;j++){t+=(frt(i,j)==bck(i,j));}
		}
		cout<<t<<"\n";
	}
}
// n, q <= 300
// n, q <= 1000
// n, q <= 5000
//
// caaaba
// 5
// 1 1
// 1 4
// 2 3
// 4 6
// 4 5
//
// 1
// 7
// 3
// 4
// 2 
