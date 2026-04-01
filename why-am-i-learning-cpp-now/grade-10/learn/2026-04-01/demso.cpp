#include <iostream>
using namespace std;
#define tname "demso"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
ll n,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1,a,tcs=0;i<=n;i++){
        cin>>a;tcs=0;
        if(a<0){a*=-1;}
        while(a){tcs+=a%10,a/=10;}
        if((tcs%3==0)&&(tcs%9!=0)){res++;}
    }
    lout(res);
}
