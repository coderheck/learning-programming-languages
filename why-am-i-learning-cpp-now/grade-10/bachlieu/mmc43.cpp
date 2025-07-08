#include<iostream>
using namespace std;
#define ll long long 
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
ll n;
int main(){
	prSieve();
	cin>>n;
	if(n>=2){cout<<2<<" ";}
	for(ll i=3;i<=n;i+=2){if(!pr[i]){cout<<i<<" ";}}
}
