#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=105;
ll n,f,t,a[maxN],pref[maxN];
bool isOne=true;
int main(){
    if(fopen("candy.inp","r")){
        freopen("candy.inp","r",stdin);
        freopen("candy.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>f>>t;
    for(ll i=1;i<=n;i++){cin>>a[i];if(a[i]>1){isOne=false;}}
    if(isOne){
        umap<ll,ll>cnt;
        for(ll i=1;i<=n;i++){pref[i]=pref[i-1]+a[i];cnt[a[i]]++;}
        if(pref[f]>=t){cout<<0;}else{
            if(cnt[1]>=t){cout<<t-pref[f];}else{cout<<"NO";}
        }
        return 0;
    }
}
