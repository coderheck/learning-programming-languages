#include<iostream>
#include<cmath>
using namespace std;
#define tname "cau4"
#define ll long long
#define lout(x) \
    cout<<x<<" "; \
//    cerr<<x<<" ";
const ll maxN=100005;
ll n,m,a[maxN],b[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    for(ll i=1;i<=m;i++){cin>>b[i];}
    for(ll i=1,res;i<=m;i++){
        res=0;
        for(ll j=1;j<=n;j++){res+=abs(b[i]-a[j]);}
        lout(res);
    }
}
