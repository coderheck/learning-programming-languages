#include <cstdio>
#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=500000;
ll n,a[maxN+5],pn[maxN+5],res=0;
umap<ll,ll>prefmin;
int main(){
    if(fopen("diemso.inp","r")){
        freopen("diemso.inp","r",stdin);
        freopen("diemso_rac.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];pn[i]=pn[i-1]+a[i];}
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j++){
            if(a[i]==a[j]){res=max(res,pn[j]-pn[i-1]);}
        }
    }
    // for(ll i=1;i<=n;i++){
    //     if(prefmin.count(a[i])){
    //         res=max(res,pn[i]-prefmin[a[i]]);
    //     }
    //     if(!prefmin.count(a[i])){
    //         prefmin[a[i]]=pn[i-1];
    //     }else{
    //         prefmin[a[i]]=min(prefmin[a[i]],pn[i-1]);
    //     }
    // }
    cout<<res;
}

