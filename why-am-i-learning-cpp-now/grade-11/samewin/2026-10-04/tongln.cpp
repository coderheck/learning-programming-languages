#include <iostream>
using namespace std;
#define tname "tongln"
#define ll long long 
const ll maxn=200005;
ll n,L,R,a[maxn],p[maxn];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>L>>R;
	for(ll i=1;i<=n;i++){cin>>a[i];p[i]=p[i-1]+a[i];}
}
