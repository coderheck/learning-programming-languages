#include <iostream>
using namespace std;
#define ll long long
using i128=__int128;
const ll modN=1000000007;
ll n,m;
i128 MOD,it=1;
int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	cin>>n>>m;
	MOD=(i128)m*modN;
	for(ll i=2;i<=n;i++){it=(it*i)%MOD;}
	cout<<(ll)((it/m)%modN);
}

