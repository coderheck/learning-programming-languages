#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
// #define tname "nd_thpt_2021_b"
#define tname "sdb"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=1000005;
struct aa{
	ll a,i;
	bool operator<(const aa &rhs)const{return i<rhs.i;}
};
ll a[maxn];
ll n;
umap<ll,ll>cnt,pos;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;cnt.reserve(n+5);pos.reserve(n+5);
	vector<aa>p;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		if(pos.find(a[i])==pos.end()){pos[a[i]]=i;}
	}
	for(umap<ll,ll>::iterator it=cnt.begin();it!=cnt.end();it++){
		if(it->second==1){
			p.push_back({it->first,pos[it->first]});
		}
	}
	lout(p.size());
	sort(p.begin(),p.end());
	for(ll i=0;i<(ll)p.size();i++){lout(p[i].a);}
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC
