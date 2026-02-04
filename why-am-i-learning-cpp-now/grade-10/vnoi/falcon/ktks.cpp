#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;
#define tname "ktks"
#define ll long long
#define ii int
#define umap unordered_map
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define getbit(x,k) (x>>(k))&1
const ll maxN=1005;
ll n,k,res=LLONG_MAX,x[maxN],c[maxN];
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin>>n>>k;
    for(ll i=0;i<n;i++){cin>>x[i];}
    for(ll i=0;i<n;i++){cin>>c[i];}
    for(ll mm=0;mm<(1<<n);mm++){
        // / bitmask với bit thứ i là trạng thái chọn nhà máy i
        ll p=0;
        for(ll i=0;i<n;i++){p+=getbit(mm,i);}
        if(p!=k){continue;}
        ll cc=0;
        for(ll i=0;i<n;i++){
            ll mmin=LLONG_MAX;
            for(ll j=0;j<n;j++){
                if(getbit(mm,j)){mmin=min(mmin,abs(x[i]-x[j]));}
            }
            cc+=c[i]*mmin;
        }
        res=min(res,cc);
    }
    lout(res);
}
