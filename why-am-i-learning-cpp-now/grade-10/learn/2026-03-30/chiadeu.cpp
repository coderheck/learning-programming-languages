#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <set>
using namespace std;
#define tname "chiadeu"
#define ll long long 
#define lout(x) \
	cout<<x<<"\n"; \
	cerr<<x<<"\n";
const ll maxN=1005;
const double eps=1e-9;
ll n,res=0;
double a[maxN];
set<double>point;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		point.insert(a[i]);
	}
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){
		for(ll j=i+1;j<=n;j++){
			// if(binary_search(a+1,a+n+1,(a[i]+a[j])/2.0)){res++;};
			double m=(a[i]+a[j])/2.0;
			auto it=point.lower_bound(m-eps);
			if(it!=point.end()&&abs(*it-m)<=eps){res++;}
		}
	}
	lout(res);
}

