#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=100000;
const ll fuck=1000000007;
ll gcd(const ll& a,const ll& b){return(!b)?a:gcd(b,a%b);}
umap<ll,ll>pos;vector<ll>pmap(maxN+5);
ll n,x,t,i=0,st[maxN+5];
void upd(ll id,ll l,ll r,ll i,ll val){
	if(l==r){st[id]=val;return;}
	ll m=l+(r-l)/2;
	if(i<=m){
		upd(id,l,m,i,val);
	}else{
		upd(id,m+1,r,i,val);
	}
	st[id]=gcd(st[2*id],st[2*id+1]);
}
ll getgcd(ll id){return st[1];}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>t>>x;
		if(t&1){
			if(cnt[pos[x]]){}
		}else{
			
		}
	}
}
