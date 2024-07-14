#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if(fopen("tong.inp","r")){
        freopen("tong.inp","r",stdin);
        freopen("tong.out","w",stdout);
    }
    ll n,p=0;cin>>n;
    for(ll i=2;i<=n;i++){
        p+=(i-1)*i*(i+1);
    }
    cout<<p;
}
