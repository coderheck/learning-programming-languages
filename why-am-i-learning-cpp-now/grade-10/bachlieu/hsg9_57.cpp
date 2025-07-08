#include<iostream>
using namespace std;
#define ll long long
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,k,a[100005],l,r,maxa=0,m,res=0;
bool cut(){
	ll c=0;
	for(ll i=0;i<n;i++){
		if(a[i]>=m){
			ll r=a[i]-m;
			c+=1+(r==m);
			if(c>=k){return true;}
		}
	}
	return false;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=0;i<n;i++){cin>>a[i];maxa=max(maxa,a[i]);}
	l=1,r=maxa;
	while(l<=r){
		m=l+(r-l)/2;
		if(cut()){res=m;l=m+1;}else{r=m-1;}
	}
	cout<<res;
}
