#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <cmath>
using namespace std;
#define tname "solve"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
const ll inff=1LL<<62;
ll tcs(ll x){
    ll res=0;
    while(x){res+=x%10,x/=10;}
    return res;
}
ll n,res=inff;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // ta có:   x^2 + S(x) * x - N  = 0
    // đặt S(x) = s   =>   x^2 + s*x - N = 0
    // Δ = sqrt(b^2 - 4ac) = sqrt(s^2 - 4 * 1 * (-N)) = sqrt(s^2 + 4N)
    // suy ra  x = (-b ± sqrt(s^2 + 4N)) / 2
    // vì x nguyên dương nên:
    // -) loại trường hợp -b - sqrt(s^2 + 4N) 
    // -) sqrt(s^2 + 4N) là một số nguyên
    // khi này ta duyệt qua mọi s có thể (9 * 18 chữ số = 162)
    for(ll s=1,d,r,x;s<=162;s++){
        d=s*s+n*4,r=sqrt(d);
        if(r*r!=d || (r-s)&1){continue;}
        x=(r-s)>>1;
        if(x>0&&tcs(x)==s){res=min(res,x);}
    }
    lout((res==inff?-1:res));
}
