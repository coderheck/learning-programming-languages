#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=1005;
ll n,m,k;
struct p{ll l,r;}a[maxN];
char d[maxN];
int main(){
	if(fopen("blrpath.inp","r")){
		freopen("blrpath.inp","r",stdin);
		freopen("blrpath.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>k;
	for(ll i=1;i<=n;i++){cin>>a[i].l>>a[i].r;}
	for(ll i=0;i<m;i++){cin>>d[i];}
	ll iter=0,res=1;
	while(k--){
		while(iter<m){
			res=(d[iter]=='L'?a[res].l:a[res].r);
			iter++;
		}
		iter=0;
	}
	cout<<res;
}
