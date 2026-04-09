#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
#define tname "closest"
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
// const ll inff=1LL<<62;
ll fastpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1){res*=a;}
        a*=a,b>>=1;
    }
    return res;
}
ll Q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // tìm k sao cho k*x gần bằng a^b <=> k gần nhất với a^b/x
    for(ll q=1,a,b,x,k,p;q<=Q;q++){
        cin>>a>>b>>x;
        if(b<0){lout(0);continue;}
        p=fastpow(a,b),k=round(1.0*p/x);
        if(abs(k*x-p)<=abs((k+1)*x-p)){
            lout(k*x);
        }else{
            lout((k+1)*x);
        }
    }
}
