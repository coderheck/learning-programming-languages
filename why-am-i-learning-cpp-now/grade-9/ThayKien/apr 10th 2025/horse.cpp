#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
ll n,a[1000005],b[1000005],res=0,j=0;
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){cin>>b[i];}
	sort(a,a+n);sort(b,b+n);
	for(ll i=0;i<n;i++){
		if(a[i]>b[j]){res++;j++;}
		if(j==n){break;}
	}
	cout<<res;
}
