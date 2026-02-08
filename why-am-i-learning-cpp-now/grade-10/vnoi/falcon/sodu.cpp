#include <iostream>
#include <algorithm>
using namespace std;
#define tname "sodu"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(a) cout<<(a);cerr<<(a);
const ll maxN=100005;
ll n,a[maxN],res=0,x,maxA;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    sort(a+1,a+n+1);
    maxA=a[n];
    for(ll i=1;i<=n;i++){
        x=a[i];
        for(ll k=x*2;k<=maxA+x;k+=x){
            ll* it=lower_bound(a+1,a+n+1,k);
            if(it==a){continue;}
            it--;
            if(*it>x){res=max(res,(*it)%x);}
        }
    }
    lout(res);
}
