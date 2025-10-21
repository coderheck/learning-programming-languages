#include <iostream>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=1000005;
ll n,a[maxN],res=0,l,r,cur,curl,curr;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	res=cur=a[1];curl=curr=1;
	for(ll i=2;i<=n;i++){
		if(cur+a[i]>a[i]){
			curr++,cur+=a[i];
		}else{
			curl=curr=i,cur=a[i];
		}
		if(cur>res){res=cur,l=curl,r=curr;}
	}
	cout<<res<<"\n";
	for(ll i=l;i<=r;i++){cout<<a[i]<<" ";}
}
