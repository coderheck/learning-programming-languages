#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "clocks"
#define ll long long 
#define umap unordered_map
const ll maxN=200005;
ll n,m,q,t[maxN];
struct aa{ll a,b;}a[maxN];
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i].a>>a[i].b;}
	cin>>q;
	for(ll i=1;i<=n;i++){
		ll rem=a[i].a,cur=a[i].b;
		do{
			cnt[cur]++;
			cur=(cur+1)%m;
			rem--;
		}while(rem);
	}
	while(q--){
		cin>>t[q];
		cout<<cnt[t[q]]<<"\n";
	}
}
