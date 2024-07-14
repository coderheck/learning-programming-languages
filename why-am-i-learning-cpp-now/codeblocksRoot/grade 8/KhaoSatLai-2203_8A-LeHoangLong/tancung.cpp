#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if(fopen("tancung.inp","r")){
        freopen("tancung.inp","r",stdin);
        freopen("tancung.out","w",stdout);
    }
    ll a,n; cin>>a>>n;
    a%=10;
    if(a==5 || a==6 || a==0){
        cout<<a;
    }else{
        n%=4;
        a=pow(a,n);
        a%=10;
        cout<<a;
    }
}
