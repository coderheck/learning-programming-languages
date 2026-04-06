#include <iostream>
using namespace std;
#define tname "ttnt"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
ll x,s,t;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>x>>s>>t;
    ll l=1,r=1000000000,m,res=r;
    while(l<=r){
        m=(l+r)>>1;
        if(m*(x+s)>=t){res=m;r=m-1;}else{l=m+1;}
        // tìm chu kì đầu tiên >= t
    }
    lout((t<=(res*(x+s))-s));
}
