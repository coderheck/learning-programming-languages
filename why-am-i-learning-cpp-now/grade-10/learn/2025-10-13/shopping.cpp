#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
ll n,q,a[maxN];
int main(){
    if(fopen("shopping.inp","r")){
        freopen("shopping.inp","r",stdin);
        freopen("shopping.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>q;
    // if(q==100){cout<<0;return 0;}
    for(ll i=1;i<=n;i++){cin>>a[i];}
    // if(!q){
    //     sort(a+1,a+n+1);
    //     ll res=0,i;
    //     for(i=3;i<=n;i+=3){res+=a[i-1]+a[i];}
    //     while(i<=n){res+=a[i];}
    //     cout<<res;
    // }else{
        sort(a+1,a+n+1,greater<ll>());
        ll minc[maxN];
        minc[0]=0;
        minc[1]=minc[0]+(100-q)*a[1]/100;
        minc[2]=minc[1]+(100-q)*a[2]/100;
        for(ll i=3;i<=n;i++){minc[i]=min(minc[i-1]+(100-q)*a[i]/100,minc[i-3]+a[i-1]+a[i-2]);}
        cout<<minc[n];
    // }
}

