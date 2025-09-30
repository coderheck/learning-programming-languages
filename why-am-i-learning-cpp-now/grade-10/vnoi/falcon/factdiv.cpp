#include <iostream>
using namespace std;
#define ll long long 
const ll modN=1000000007;
ll n,m,it=1,MOD;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	MOD=m*modN;
	for(ll i=2;i<=n;i++){it=(it%MOD*i%MOD)%MOD;}
	cout<<(it/m)%modN;
}
