#include <iostream>
using namespace std;
#define tname "cp"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxP=1000000;
bool pr[maxP+5];
ll a,b,prs[maxP+5],prz=0,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
    for(ll i=2;i<=maxP;i++){
        if(!pr[i]){prs[prz++]=i;}
    }
    cin>>a>>b;
    for(ll i=0,t;i<prz;i++){
        t=prs[i]*prs[i];
        if(t>=a&&t<=b){res++;}
        else if(t>b){break;}
    }
    lout(res);
}
