#include<iostream>
using namespace std;
#define ll long long
#define tname "bseq"
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=500005,maxP=1000000;
bool pr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
ll n,a[maxN],sum[maxN];
bool sub2=true;
void ssub2(){
	ll l=-1,r=-1;
	for(ll i=1;i<=n;i++){
		if(!pr[a[i]]){
			if(l==-1){l=i;}else if(r==-1||i>r){r=i;}
		}
	}
	if(l==-1||r==-1){cout<<"NO";return;}
	cout<<sum[r]-sum[l-1];
}
void ssub1(){
	ll res=-1;
	for(ll l=1;l<=n;l++){
		if(!pr[a[l]]){
			for(ll r=l+1;r<=n;r++){
				if(!pr[a[r]]){
					res=max(res,sum[r]-sum[l-1]);
				}
			}
		}
	}
	if(res==-1){cout<<"NO";return;}
	cout<<res;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	prSieve();
	cin>>n;
//	sub2=n>100;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
		sub2=sub2&&(a[i]>=0);
	}
	if(sub2){ssub2();return 0;}
	if(n<=100){ssub1();return 0;}
}
