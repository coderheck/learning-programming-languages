#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define tname "elis"
const ll maxN=100005;
ll m,n=0,ac=0,lisc=0,a[maxN],lis[maxN];
struct quer{ll x,y;}q[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m;
	for(ll i=1;i<=m;i++){
		cin>>q[i].x>>q[i].y;
		n+=q[i].y;
	}
	if(n<=1000000){
		for(ll i=1;i<=m;i++){
			a[ac++]=q[i].x;
			for(ll j=q[i].x+1;j<=q[i].x+q[i].y-1;j++){
				a[ac++]=j;
			}
		}
		lis[lisc++]=a[0];
		for(ll i=1;i<ac;i++){
			if(a[i]>lis[lisc-1]){
				lis[lisc++]=a[i];
			}else{
				ll pos=lower_bound(lis,lis+lisc,a[i])-lis;
				lis[pos]=a[i];
			}
		}
		cout<<"\n"<<lisc;
	}
}
