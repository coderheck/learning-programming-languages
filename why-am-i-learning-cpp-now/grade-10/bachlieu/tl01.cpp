#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=100005;
ll s,n;
struct dragon{ll x,y;}a[maxN];
bool cmpfn(const dragon& a,const dragon& b){
	return a.x==b.x?a.y>b.y:a.x<b.x;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>s>>n;
	for(ll i=0;i<n;i++){cin>>a[i].x>>a[i].y;}
	sort(a,a+n,cmpfn);
	for(ll i=0;i<n;i++){
		if(s<=a[i].x){cout<<"NO\n"<<n-i;return 0;}
		s+=a[i].y;
	}
	cout<<"YES";
}

