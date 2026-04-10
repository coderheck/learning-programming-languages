#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "numbers"
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
// const ll maxN=10005;
ll Q,n;
ll tcs_digits(ll x){
    ll res=0;
    while(x){res+=x%10,x/=10;}
    return res;
}
ll tcs_divs(ll x){
    umap<ll,ll>cnt;
    ll res=0;
    while(!(x&1)){x>>=1,res+=2;}
    for(ll i=3;i*i<=x;i+=2){
        while(x%i==0){cnt[i]++,x/=i;}
    }
    if(x>1){cnt[x]++;}
    for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
        res+=tcs_digits(i->first)*i->second;
    }
    return res;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // - Brother, may I have some oats?
    // - no.
    // - I am STARVING, brother.
    while(Q--){
        cin>>n;
        lout((tcs_digits(n)==tcs_divs(n)));
    }
}
