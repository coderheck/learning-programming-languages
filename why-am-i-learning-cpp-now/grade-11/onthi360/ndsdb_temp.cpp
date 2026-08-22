#include <iostream>
#include <unordered_map>					// for normal umap
#include <vector>
using namespace std;
#define tname "NDSDB"
#define umap unordered_map
#define ll long long 
const ll maxN=1000005;
ll n,a[maxN],p[maxN],pz=0;
vector<ll>t;
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	if(n==1){
		cin>>a[0];cout<<"1\n"<<a[0];
		return 0;
	}
	// cnt.resize(10000000);
	for(ll i=1;i<=n;i++){cin>>a[i];cnt[a[i]]++;}
	for(ll i=1;i<=n;i++){
		if(cnt[a[i]]==1){
			// p[pz++]=a[i];
			t.push_back(a[i]);
		}
	}
	cout<<t.size()<<"\n";
	if(t.size()==0){cout<<"-1";return 0;}
	for(ll i=0;i<(ll)t.size();i++){
		if(i+1==(ll)t.size()){cout<<t[i];continue;}
		cout<<t[i]<<"\n";
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
