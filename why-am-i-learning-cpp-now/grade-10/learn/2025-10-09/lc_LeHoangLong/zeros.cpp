#include <iostream>
using namespace std;
#define ll long long 
ll compute(ll x){
    ll n=x,c=0,i=5;
    while(i<=n){c+=n/i,i*=5;}
    return c;
}
ll a,b;
int main(){
    if(fopen("zeros.inp","r")){
        freopen("zeros.inp","r",stdin);
        freopen("zeros.out","w",stdout);
    }
    cin>>a>>b;
    cout<<compute(b)-compute(a-1);
}
