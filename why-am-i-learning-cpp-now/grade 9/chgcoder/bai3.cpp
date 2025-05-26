#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
bool isPr(const ll &n){
	if(n<2){return false;}
	if(n==2||n==3){return true;}
	if(!(n&1)){return false;}
	for(ll i=3;i*i<=n;i+=2){
		if(n%i==0){return false;}
	}
	return true;
}
ll n,sq;
int main(){
	cin>>n;
	if(n<=4){cout<<4;return 0;}
	sq=sqrt(n);
	sq+=(sq*sq<n);
	for(;;sq++){
		if(isPr(sq)){cout<<sq*sq;return 0;}
	}
}
