#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if(fopen("cost.inp","r")){
        freopen("cost.inp","r",stdin);
        freopen("cost.out","w",stdout);
    }
    int n,a,b,t=0,tam;cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        cin>>tam;
        if(tam==2){t+=a+b;}else{t+=min(a,b);}
    }
    cout<<t;
}
