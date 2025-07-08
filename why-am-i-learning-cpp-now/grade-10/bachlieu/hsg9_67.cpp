#include<iostream>
using namespace std;
#define ll long long
#define mod 1000000007
ll t,a,f[100005],n=2;
void preproc(){
	f[0]=f[1]=1;ll t,f1=1,f2=1;
	while(n<=100000){
		t=(f1+f2)%mod;
		f[n++]=t;
		f1=f2,f2=t;
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	preproc();
	cin>>t;
	while(t--){cin>>a;cout<<f[a-1]<<"\n";}
}
