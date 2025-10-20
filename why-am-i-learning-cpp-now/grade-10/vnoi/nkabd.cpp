#include<iostream>
using namespace std;
#define ll long long
#define maxN 100000
ll l,r,d[100005],res=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>l>>r;
	for(ll i=1;i<=r;i++){
		for(ll j=i;j<=r;j+=i){d[j]+=i;}
	}
	for(ll i=l;i<=r;i++){res+=(i<d[i]-i);}
	cout<<res;
}
