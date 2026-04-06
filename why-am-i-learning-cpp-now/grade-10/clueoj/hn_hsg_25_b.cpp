#include <iostream>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
#define tname "dl"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
string s;
ll sum=0,n,res=-(1LL<<62);
umap<ll,ll>fst;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s;
    ll n=s.size();s="#"+s;
    for(ll i=1,len;i<=n;i++){
        sum+=(s[i]=='V'?1:-2);
        if(fst[sum]){
            len=i-fst[sum];
            res=max(res,len);
        }else{
            fst[sum]=i;
        }
    }
    lout(res);
}
