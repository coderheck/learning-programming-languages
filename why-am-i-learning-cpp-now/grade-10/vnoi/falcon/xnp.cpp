#include <stdio.h>
#include <unordered_map>
using namespace std;
#define tname "xnp"
#define ll long long
#define ii int
#define umap unordered_map
#define lout(format,...) fprintf(stdout,(format),__VA_ARGS__);fprintf(stderr,(format),__VA_ARGS__);
const ll maxN=1000000000000;
// với maxN = 10^12 thì dãy nhị phân lớn nhất có độ dài 40
// => 3 for là ok; với 2 for để chọn i, j là bắt đầu và kết thúc,
//    1 for để chuyển nhị phân -> thập phân
ll x,sz=0;char b[41];
umap<ll,ll>cnt;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    // x=maxN;
    scanf("%lld",&x);
    while(x){b[sz++]=(x&1)+'0',x>>=1;}
    for(ll i=0;i<sz/2;i++){char m=b[i];b[i]=b[sz-i-1],b[sz-i-1]=m;}
    for(ll l=0;l<sz;l++){
        for(ll r=l;r<sz;r++){
            // lấy đoạn [l;r]
            ll e=0,t=0;
            for(ll i=r;i>=l;i--){t+=(b[i]-'0')*(1LL<<e),e++;}
            cnt[t]++;
        }
    }
    ll res=0;
    for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
        res+=i->first;
    }
    lout("%lld",res);
}
