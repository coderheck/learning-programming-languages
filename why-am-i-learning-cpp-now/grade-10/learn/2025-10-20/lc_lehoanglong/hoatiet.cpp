#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=50005;
ll n,a[maxN];
int main(){
	if(fopen("hoatiet.inp","r")){
		freopen("hoatiet.inp","r",stdin);
		// freopen("hoatiet.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
}

