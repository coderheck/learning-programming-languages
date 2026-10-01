#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>
using namespace std;
using namespace __gnu_pbds;
#define tname "3356"
#define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1ll<<60;
int n,q,a[maxN],pre[maxN];
umap<int,set<int>>pos;
umap<int,int>lst;
struct seg{
	vector<int>st;
	seg(){};
	seg(const int &__sz){st.assign(__sz*4ll+5,0);}
	void init(const int &__sz){st.assign(__sz*4ll+5,0);}
	void make(int id=1,int l=1,int r=n){
		if(l==r){st[id]=pre[l];return;}
		int m=(l+r)>>1;
		make(id<<1,l,m);make(id<<1|1,m+1,r);
		st[id]=max(st[id<<1],st[id<<1|1]);
	}
	void upd(int i,int val,int id=1,int l=1,int r=n){
		if(i<l||i>r){return;}
		if(l==r){st[id]=val;return;}
		int m=(l+r)>>1;
		if(i<=m){
			upd(i,val,id<<1,l,m);
		}else{
			upd(i,val,id<<1|1,m+1,r);
		}
		st[id]=max(st[id<<1],st[id<<1|1]);
	}
	ll get(int u,int v,int id=1,int l=1,int r=n){
		if(u>r||v<l){return -inff;}
		if(u<=l&&v>=r){return st[id];}
		int m=(l+r)>>1;
		return max(get(u,v,id<<1,l,m),get(u,v,id<<1|1,m+1,r));
	}
} falcon;
void del(int k){
	auto it=pos[a[k]].find(k);
	auto it2=next(it);
	int p=0;
	if(it!=pos[a[k]].begin()){
		p=*prev(it);
	}
	if(it2!=pos[a[k]].end()){
		pre[*it2]=p;
		falcon.upd(*it2,p);
	}
	pos[a[k]].erase(it);
}
void add(int u,int k){
    auto it=pos[u].upper_bound(k);
    int p=0;
    if(it!=pos[u].begin()){
        auto it2=it;
        it2--;
        p=*it2;
    }
    if(it!=pos[u].end()){
        pre[*it]=k;
        falcon.upd(*it,k);
    }
    pre[k]=p;
    falcon.upd(k,p);
    pos[u].insert(k);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=lst[a[i]];
		lst[a[i]]=i;
		pos[a[i]].insert(i);
	}
	falcon.init(n);
	falcon.make();
	while(q--){
		int t;
		cin>>t;
		if(t==1){
			int k,u;cin>>k>>u;
			del(k);a[k]=u;add(u,k);
		}else{
			int l,r;cin>>l>>r;
			int m=falcon.get(l,r);
			if(m>=l){lout("NO");}else{lout("YES");}
		}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
