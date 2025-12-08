#include <iostream>
using namespace std;
#define ll long long 
#define tname "candy"
const ll modN=1000000007;
ll n,k;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	if(k==2){
		ll res=0-!(n&1);
		for(ll i=1;i<=n/2;i++){res++;}
		cout<<res;
	}
}
