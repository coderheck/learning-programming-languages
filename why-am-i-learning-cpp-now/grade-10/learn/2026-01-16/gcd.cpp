#include <iostream>
#include <algorithm>
using namespace std;
#define tname "gcd"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(a) cout<<(a);cerr<<(a);
const ll maxN=100005;
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll n,a[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    ll res=1;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            for(ll k=1;k<=n;k++){
                for(ll t=1;t<=n;t++){
                    if(i<j && j<k && k<t){
                        res=max(res,gcd(a[i],a[j])+gcd(a[k],a[t]));
                        // cerr<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<a[t]<<" "<<gcd(a[i],a[j])+gcd(a[k],a[t])<<"\n";
                    }
                }
            }
        }
    }
    lout(res)
}
