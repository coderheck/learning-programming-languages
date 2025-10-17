#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=100005;
ll n,q,l,r,a[maxN];
void chimbe(){
    umap<ll,ll>cnt;
    while(q--){
        cnt.clear();
        cin>>l>>r;
        for(ll i=l;i<=r;i++){cnt[a[i]]++;}
        for(ll i=0;i<=n;i++){if(!cnt[i]){cout<<i<<"\n";break;}}
    }
}
int main(){
    if(fopen("ability.inp","r")){
        freopen("ability.inp","r",stdin);
        freopen("ability.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    chimbe();
}
