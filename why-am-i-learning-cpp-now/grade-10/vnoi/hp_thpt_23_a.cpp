#include <iostream>
using namespace std;
#define tname "hp_thpt_23_a"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
ll n,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i*i<=n;i++){
        if(!(n%i)){res+=1+(i!=n/i);}
    }
    lout(res);
}
