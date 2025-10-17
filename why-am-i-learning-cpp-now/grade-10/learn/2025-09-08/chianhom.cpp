#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=1000005;
ll n,res=1;struct node{ll a,b;}a[maxN];
bool cmpfn(const node& a,const node& b){return(a.a==b.a)?(a.b<b.b):(a.a<b.a);}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i].a>>a[i].b;}
	sort(a,a+n,cmpfn);
	for(ll i=1;i<n;i++){res+=(a[i].a!=a[i-1].a||a[i].b!=a[i-1].b);}
	cout<<res;
}
