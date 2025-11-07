#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=100005;
ll m,n,sz,a[maxN];
int main(){
	if(fopen("bangso.inp","r")){
		freopen("bangso.inp","r",stdin);
		freopen("bangso.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;sz=m*n;
	for(ll i=1;i<=sz;i++){cin>>a[i];}
	sort(a+1,a+sz+1);
	if(m==1){
		for(ll i=1;i<=sz;i++){cout<<a[i]<<" ";}
		return 0;
	}
	ll c=1;
	vector<vector<ll>>b(m+5,vector<ll>(n+5,0));
	for(ll i=1;i<=m;i++){
		if(i&1){
			for(ll j=1;j<=n;j++){b[i][j]=a[c++];}
		}else{
			for(ll j=n;j>=1;j--){b[i][j]=a[c++];}
		}
	}
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){cout<<b[i][j]<<" ";}
		cout<<"\n";
	}
}
