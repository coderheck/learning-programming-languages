#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=5000005;
ll n,k,a[maxN],res=0;
int main(){
    if(fopen("play.inp","r")){
        freopen("play.inp","r",stdin);
        freopen("play.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    if(k==1){
        for(ll i=1;i<=n;i++){res+=a[i];}
        cout<<res;return 0;
    }
    if(n==k){
        res=a[0]+a[n];
        for(ll i=2;i<n;i++){res+=(a[i]>0?a[i]:0);}
        cout<<res;return 0;
    }

}
