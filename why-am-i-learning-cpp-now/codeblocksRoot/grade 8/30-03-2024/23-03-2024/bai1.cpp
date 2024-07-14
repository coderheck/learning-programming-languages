#include"bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
    if(fopen("bai1.inp","r")){
        freopen("bai1.inp","r",stdin);
        freopen("bai1.out","w",stdout);
    }
    ll n;cin>>n;
    for(ll i=n/2;i>=1;i--){
        if(n%i==0){cout<<i;break;}
    }
}
