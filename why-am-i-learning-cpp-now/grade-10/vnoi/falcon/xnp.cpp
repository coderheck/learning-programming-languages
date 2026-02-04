#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
#define tname "xnp"
#define ll long long
#define ii int
#define umap map
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000000000000;
// với maxN = 10^12 thì dãy nhị phân lớn nhất có độ dài 40
// => 3 for là ok; với 2 for để chọn i, j là bắt đầu và kết thúc,
//    1 for để chuyển nhị phân -> thập phân
ll x,n;string b;
umap<ll,ll>cnt;
int main(){
 //    if(fopen(tname".inp","r")){
	// 	freopen(tname".inp","r",stdin);
	// 	freopen(tname".out","w",stdout);
	// }
    // x=maxN;
    cin>>x;
    while(x){b.push_back((x&1)+'0');x>>=1;}
    n=b.size();
    reverse(b.begin(),b.end());
    b="#"+b;
    for(ll l=1;l<=n;l++){
        for(ll r=l;r<=n;r++){
            // lấy đoạn [l;r]
            ll e=0,t=0;
            // cerr<<l<<" "<<r<<": ";
            for(ll i=r;i>=l;i--){t+=(b[i]-'0')*(1LL<<e),e++;}
            cnt[t]++;
            // cerr<<t<<"\n";
        }
    }
    ll res=0;
    for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
        res+=i->first;
    }
    // lout(res);
    cout<<res;
}
