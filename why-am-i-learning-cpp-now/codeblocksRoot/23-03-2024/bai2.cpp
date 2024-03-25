#include"bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
    if(fopen("bai2.inp","r")){
        freopen("bai2.inp","r",stdin);
        freopen("bai2.out","w",stdout);
    }
    ll x,y,n;cin>>x>>y>>n;
    for(ll i=1;i<=n;i+=2){x*=2;}
    for(ll i=2;i<=n;i+=2){y*=2;}
    cout<<max(x,y)/min(x,y);
}
