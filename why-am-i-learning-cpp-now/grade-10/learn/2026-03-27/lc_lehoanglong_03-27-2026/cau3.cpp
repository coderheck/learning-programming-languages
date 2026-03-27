#include<iostream>
using namespace std;
#define tname "cau3"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n";
const ll maxP=1000000;
bool pr[maxP+5];
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
}
ll tcs(ll x){
    ll r=0;
    while(x){r+=x%10,x/=10;}
    return r;
}
ll n,a,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    prSieve();
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a;
        if(!pr[a]&&!pr[tcs(a)]){res++;}
    }
    lout(res);
}
