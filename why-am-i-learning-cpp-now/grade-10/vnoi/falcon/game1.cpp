#include <cstdio>
#include <iostream>
using namespace std;
#define ll unsigned long long 
#define i128 __int128
#define tname "game1"
ll h,d;
bool check(const ll &m){
	ll s=m+1,q=d/s,r=d%s;
	i128 c=0;
	c+=(i128)r*((i128)(q+1)*(q+2)/2);
	c+=(i128)(s-r)*((i128)q*(q+1)/2);
	return c<=h+m;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>h>>d;
	ll l=0,r=d,m,res=d;
	while(l<=r){
		m=l+r>>1;
		if(check(m)){res=m,r=m-1;}else{l=m+1;}
	}
	cout<<d+res;
}
