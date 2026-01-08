#include <iostream>
#include <cmath>
using namespace std;
#define tname "chinhphuong"
#define ll long long
ll l,r,res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>l>>r;
	for(ll i=sqrt(l);i*i<=r;i++){res++;}
	cout<<res;
}
