#include <iostream>
using namespace std;
#define ll long long
#define tname "problem"
const ll maxN=100005,maxP=1000000;
bool pr[maxP+5];
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
}
ll n,a[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    prSieve();
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    ll len=0,res=0;
    for(ll r=1;r<=n;r++){
        if(pr[a[r]]){
            len++;
        }else{
            res+=len*(len+1)/2;
            len=0;
        }
    }
    res+=len*(len+1)/2;
    cout<<res;
}
