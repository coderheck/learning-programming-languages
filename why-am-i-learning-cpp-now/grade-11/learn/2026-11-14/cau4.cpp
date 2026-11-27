#include <iostream>
#include <vector>
using namespace std;
#define tname "cau4"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62;
ll getbit(const ll &x,const ll &k){return (x>>k)&1;}
struct kbc{
    ll s,e,w;
    bool operator<(const kbc &rhs)const{return s<rhs.s;}
};
ll n;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    if(n<=20){ // ÔNG VUA BITMASK
//        vector<ll>s(n+5),e(n+5),w(n+5);
        vector<kbc>a(n+5);
        for(ll i=1;i<=n;i++){cin>>a[i].s>>a[i].e>>a[i].w;}
        sort(a.begin(),a.end());
        ll maxmask=1ll<<(n+1);
        for(ll mask=1;mask<maxmask;mask++){
            vector<ll>selId;
            for(ll i=1;i<=n;i++){
                if(getbit(mask,i-1)){selId.push_back(i);}
            }

        }
    }
    lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
