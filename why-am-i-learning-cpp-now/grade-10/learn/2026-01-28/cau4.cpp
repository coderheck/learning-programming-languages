#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define tname "cau4"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=100005;
ll n,q,a[maxN],b[maxN],bz=0;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    while(q--){
        ll l,r;cin>>l>>r;
        bz=0;
        for(ll i=l;i<=r;i++){b[bz++]=a[i];}
        sort(b,b+bz);
        lout(b[((bz+1)>>1)-1]);
    }
}
