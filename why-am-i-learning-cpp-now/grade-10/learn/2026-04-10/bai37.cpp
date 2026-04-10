// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bai37"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
// const ll inff=1LL<<62;
ll n,res3=0,res10=0,res10_100=0,maxx=0,maxc=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // welcome to the internet, have a look around
    // anything that brain of yours can think of can be found
    for(ll i=1,a;i<=n;i++){
        cin>>a;
        if(a%3==0){res3++;}
        if(a>10){res10++;}
        if(a>=10&&a<=500){res10_100++;}
        if(a>maxx){maxx=a,maxc=1;}else if(a==maxx){maxc++;}
    }
    lout(res3<<"\n"<<res10<<"\n"<<res10_100<<"\n"<<maxc);
}
