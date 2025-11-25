#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
ll n,q,a[maxN],res=0;
int main(){
    if(fopen("shopping.inp","r")){
        freopen("shopping.inp","r",stdin);
        freopen("shopping.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>q;
    if(q==100){cout<<0;return 0;}
    for(ll i=1;i<=n;i++){cin>>a[i];}
    sort(a+1,a+n+1,greater<ll>());
    if(!q){
        ll i=1;
        while(i<=n){
            if(i+2<=n){
                res+=a[i+1]+a[i+2];
                i+=3;
            }else{
                while(i<=n){res+=a[i++];}
            }
        }
        cout<<res;
        return 0;
    }else{
        res=1000000000007;ll tm=0,i=1;
        for(i=1;i<=n;i++){tm+=a[i]-(a[i]*q/100);} // chon 1 moi lan mua 
        res=min(res,tm);
        tm=0,i=1;
        while(i<=n){
            if(i+2<=n){
                tm+=a[i+1]+a[i+2];
                i+=3;
            }else{
                while(i<=n){tm+=a[i]-(a[i]*q/100);i++;}
            }
        }
        cout<<min(res,tm);
        return 0;
    }
}
