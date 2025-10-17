#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=100005;
ll n,k=0,c=0,res=0;
struct p{ll ft,se;}a[2*maxN];
bool cmpfn(const p& a,const p& b){return(a.ft<b.ft);}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i].ft;a[i].se=1;}
	for(ll i=1;i<=n;i++){cin>>a[n+i].ft;a[n+i].se=0;}
	sort(a+1,a+2*n+1,cmpfn);
	for(ll i=1;i<=2*n-1;i++){
		if(a[i].se!=a[i+1].se){res++;i++;}
	}
	cout<<res;
}
