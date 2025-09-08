#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=20;
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
struct match{ll a,b;}a[maxN+5];
bool cmpfn(const match& a,const match& b){return a.b>b.b;}
ll n,m,res=0,rem;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;rem=n;
	for(ll i=0;i<m;i++){cin>>a[i].a>>a[i].b;}
	sort(a,a+m,cmpfn);
	for(ll i=0;i<m&&rem;i++){
		ll tm=min(a[i].a,rem);
		res+=tm*a[i].b;
		rem-=tm;
	}
	cout<<res;
}
