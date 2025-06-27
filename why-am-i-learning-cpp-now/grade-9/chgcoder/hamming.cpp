#include<iostream>
using namespace std;
#define ll long long
#define maxP 1000
bool pr[maxP+5];
ll n,a[1005];
int main(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){
		if(a[i]<=10){cout<<"1 ";continue;}
		while(!(a[i]&1)){a[i]>>=1;}
		for(ll j=3;j*j<=a[i];j+=2){
			if(a[i]%j==0){
				if(j>5){cout<<"0 ";break;}
				while(a[i]%j==0){a[i]/=j;}
			}
		}
		if(a[i]>5){cout<<"0 ";}else{cout<<"1 ";}
	}
}
