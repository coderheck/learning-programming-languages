// 🤯🤯🤯🤯🤯🤯
#include <iostream>
#include <iterator>
#include <vector>
#include <set>
using namespace std;
#define ll long long 
#define tname "packages"
const ll maxN=200005,inff=100000000007;
ll T,n,q,a[maxN];
// struct segtree{
// 	ll n;vector<ll>st;
// 	segtree(ll _n):n(_n){st.assign(4*n+5,0);}
// 	void upd(ll id,ll l,ll r,ll i,ll val){
// 		if(l==r){st[id]+=val;return;}
// 		ll m=l+r>>1;
// 		if(i<=m){
// 			upd(id<<1,l,m,i,val);
// 		}else{
// 			upd(id<<1|1,m+1,r,i,val);
// 		}
// 		st[id]=st[id<<1]+st[id<<1|1];
// 	}
// 	ll quer(ll id,ll l,ll r,ll lim){
// 		if(st[id]==0||l>lim){return -1;}
// 		if(l==r){return l;}
// 		ll m=l+r>>1;
// 		if(lim>m){
// 			ll res=quer(id<<1|1,m+1,r,lim);
// 			if(res!=-1){return res;}
// 		}
// 		return quer(id<<1,l,m,lim);
// 	}
// };
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		cin>>n>>q;
		for(ll i=0;i<n;i++){cin>>a[i];}
		// có thể dùng segtree để tìm túi nặng nhất trong O(logn) (?) 
		// ban đầu build segtree với mọi node.val=-inff, sau đó sẽ 
		// query với tham số q
		//
		// sub 1: duyệt từng túi
		if(T<=10&&n<=1000){
			ll cc=1;
			vector<ll>bag;
			bag.push_back(a[0]);
			for(ll i=1;i<n;i++){
				ll bagId=-1,bestW=-inff;
				for(ll j=0;j<bag.size();j++){
					if(bag[j]+a[i]<=q&&bestW<bag[j]){bagId=j,bestW=bag[j];}
				}
				if(bagId==-1){
					bag.push_back(a[i]);cc++;
				}else{
					bag[bagId]+=a[i];
				}
			}
			cout<<cc<<"\n";
			continue;
		}
		// sub 2: multiset (vì segtree thì bao nhiêu bộ nhớ cho đủ)
		ll cc=0;
		multiset<ll>bag;
		for(ll i=0;i<n;i++){
			ll lim=q-a[i];
			multiset<ll>::iterator it=bag.upper_bound(lim);
			if(it==bag.begin()){
				cc++;bag.insert(a[i]);
			}else{
				ll cur=*--it;
				bag.erase(it);bag.insert(cur+a[i]);
			}
		}
		cout<<cc<<"\n";
	}
}
