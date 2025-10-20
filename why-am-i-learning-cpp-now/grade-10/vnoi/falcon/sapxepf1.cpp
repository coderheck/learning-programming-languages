#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll abs(const ll& a,const ll& b){
	ll r=a-b;
	if(r<0){return r*-1;}else{return r;}
}
ll n,a[100005],res=0,sum=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	sort(a,a+n);
	for(ll i=0;i<n;i++){
		res+=a[i]*i-sum;
		sum+=a[i];
	}
	cout<<res;
}
