#include <iostream>
#include <cmath>
using namespace std;
#define tname "cau1"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
ll a,b,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;
    // lout((ll)(sqrt(b)-sqrt(a-1)));
    for(ll i=sqrt(a);i*i<=b;i++){
        ll p=i*i;
        if(p>=a&&p<=b){res++;}
    }
    lout(res);
}
