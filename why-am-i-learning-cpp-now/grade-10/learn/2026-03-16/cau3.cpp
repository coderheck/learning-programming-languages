#include <iostream>
#include <vector>
using namespace std;
#define tname "cau3"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxP=10000000;
bool pr[maxP+5];
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
}
ll l,r,k,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>l>>r>>k;
    if(k==2){
        prSieve();
        for(ll i=l;i<=r;i++){if(!pr[i]){res++;}}
        lout(res);
        return 0;
    }else{
        vector<ll>d(1000005,0);
        for(ll i=1;i<=1000000;i++){
            for(ll j=i;j<=1000000;j+=i){d[j]++;}
        }
        for(ll i=l;i<=r;i++){if(d[i]==k){res++;}}
        lout(res);
        return 0;
    }
}
