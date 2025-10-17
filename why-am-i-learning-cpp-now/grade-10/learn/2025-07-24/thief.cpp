#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxM=25;
struct pack{ll a,b;}a[maxM];
bool cmpfn(const pack& a,const pack& b){return(a.b<b.b);}
ll n,m;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=0;i<m;i++){cin>>a[i].a>>a[i].b;}
	sort(a,a+m,cmpfn);
	for(ll i=0;i<m;i++){

	}
}
