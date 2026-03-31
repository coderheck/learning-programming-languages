#include <stdio.h>
// using namespace std;
#define tname "cau1"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
ll gcd(const ll &a,const ll &b){return(b)?gcd(b,a%b):a;}
ll x,y,gc,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    // cin.tie(0)->sync_with_stdio(0);
    // cin>>x>>y;
    scanf("%lld%lld",&x,&y);
    gc=gcd(x,y);
    for(ll i=1;i*i<=gc;i++){
        if(!(gc%i)){
            res++;
            if(i!=gc/i){res++;}
        }
    }
    printf("%lld",res);
}
