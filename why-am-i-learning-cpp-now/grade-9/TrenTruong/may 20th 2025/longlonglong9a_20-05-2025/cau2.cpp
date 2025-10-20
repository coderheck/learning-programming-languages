#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
ll l,r,c=0;
int main(){
	prSieve();
	cin>>l>>r;
	for(ll i=sqrt(l);i*i<=r;i++){
		if(!pr[i]){
			ll s=i,d=1;
			while(s*i<=r){
				s*=i;d++;
				if(!pr[d+1]&&s>=l&&s<=r){c++;}
			}
		}
	}
	cout<<c;
}
