#include"bits/stdc++.h"
#define ll long long
using namespace std;
int tcs(int n){
    int a=n,t=0;
    while(a!=0){t+=a%10;a/=10;}
    return t;
}
int main(){
    if(fopen("bai3.inp","r")){
        freopen("bai3.inp","r",stdin);
        freopen("bai3.out","w",stdout);
    }
    int t,n;cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        if( floor(sqrt(tcs(n))) == ceil(sqrt(tcs(n))) ){cout<<1<<"\n";}else{cout<<0<<"\n";}
    }
}
