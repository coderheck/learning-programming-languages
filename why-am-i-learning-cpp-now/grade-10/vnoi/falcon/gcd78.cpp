#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "gcd78"
#define ll long long
#define umap unordered_map
#define lout(x) cout<<(x)<<"\n";/*cerr<<(x)<<"\n";*/
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=1000005;
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll n,a[maxN];
umap<ll,ll>cnt,cntdiv;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    if(n==2){ // sub 1 if else
        lout((gcd(a[1],a[2])>1?2:1));
        return 0;
    }else if(n<=18){ // sub 2 bitmask
        const ll maxMm=1<<n;
        ll res=1;
        for(ll mm=1;mm<=maxMm;mm++){
            // bitmask với bit thứ i là trạng thái chọn a[i]
            ll gc=0,c=0;
            for(ll i=1;i<=n;i++){
                if(getbit(mm,i-1)){
                    c++;
                    if(!gc){gc=a[i];}else{gc=gcd(gc,a[i]);}
                }
            }
            if(gc>1){if(res<c){res=c;}}
        }
        lout(res);
        return 0;
    }
    // sub 3
    ll res=0;
    for(ll i=1;i<=n;i++){if(a[i]<=1e7){cnt[a[i]]++;}}
    for(ll i=2;i<maxN;i++){
        for(ll j=i;j<maxN;j+=i){cntdiv[i]+=cnt[j];}
    }
    for(ll i=2;i<maxN;i++){res=max(res,cntdiv[i]);}
    lout(res);
}
