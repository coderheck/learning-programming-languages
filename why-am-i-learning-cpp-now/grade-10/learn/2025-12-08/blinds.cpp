#include <iostream>
#include <string>
using namespace std;
#define ll long long 
#define tname "blinds"
ll m,n,cnt[6];
string ss,a[5];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;
	getline(cin,ss);
	for(ll i=1;i<=m;i++){
		for(ll i=0;i<5;i++){getline(cin,a[i]);}
		for(ll i=1;i<=n;i++){
			ll t=0;
			for(ll j=1;j<5;j++){t+=a[j][i*5-4]=='*';}
			cnt[t]++;
		}
	}
	for(ll i=0;i<5;i++){cout<<cnt[i]<<" ";}
}
