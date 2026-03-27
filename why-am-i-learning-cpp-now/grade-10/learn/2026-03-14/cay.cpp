#include<iostream>
#include<vector>
using namespace std;
#define tname "cay"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define getbit(x,k) (((x)>>(k))&1)
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n"
const ll maxN=10005,modN=1000000007;
ll n,a[maxN],res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    if(n<=20){
        // sub 1 & 2: bitmask
        const ll maxMask=(1<<n)-1;
        ll h[21],hc=0,pre=0;bool good=true;
        for(ll mm=1;mm<=maxMask;mm++){
            // bitmask với bit thứ i là trạng thái chọn cây thứ i
            hc=pre=0,good=true;
            for(ll i=1;i<=n;i++){
                if(getbit(mm,i-1)){h[hc++]=a[i];}
            }
            if(hc<3){continue;}
            pre=h[1]-h[0];
            for(ll i=2;i<hc;i++){
                if(h[i]-h[i-1]!=pre){good=false;continue;}
            }
            res+=good;
//            if(good){for(ll i=0;i<hc;i++){cerr<<h[i]<<" ";}cerr<<"\n";}
        }
        lout(res);
    }
}
