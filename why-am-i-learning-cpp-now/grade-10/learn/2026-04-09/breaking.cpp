#include <iostream>
using namespace std;
#define tname "breaking"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
const ll inff=1LL<<62;
ll n,maxx=-inff,minn=inff,maxxc=0,minnc=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // plplplpplplplplplppplllpppllplplpl
    for(ll i=1,a;i<=n;i++){
        cin>>a;
        if(maxx<a){maxx=a,maxxc++;}
        if(minn>a){minn=a,minnc++;}
    }
    lout(maxxc-1<<" "<<minnc-1);
}
