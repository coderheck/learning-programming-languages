#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=100005;
const ll limN=100000005;
ll n,l=0,r=0,res=0,a[maxN];umap<ll,ll>pre;
void preproc(){
	ll x=1,it=1;
	while(x<limN){
		pre[x]=1;
		it++;x+=it;
	}
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	preproc();
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(;r<n;r++){
		if(pre[a[r]]){
			while(!pre[a[l]]){l++;}
			res=max(res,r-l+1);
		}else{
			l=r;
		}
	}
	cout<<res;
}
