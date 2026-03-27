#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
#define tname "cau5"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=1000005;
ll n,a[maxN],res=0;
vector<ll>lis,lds;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    for(ll i=1;i<=n;i++){
        auto i1=upper_bound(lis.begin(),lis.end(),a[i]),
            i2=upper_bound(lds.begin(),lds.end(),a[i],greater<ll>());
        if(i1==lis.end()){lis.push_back(a[i]);}else{*i1=a[i];}
        if(i2==lds.end()){lds.push_back(a[i]);}else{*i2=a[i];}
    }
    lout((n-max(lis.size(),lds.size())));
}
