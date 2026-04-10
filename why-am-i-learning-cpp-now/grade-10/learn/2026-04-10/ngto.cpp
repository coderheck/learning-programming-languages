// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "ngto"
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
const ll maxP=300000;
bool pr[maxP+5];
ll n,ps[maxP],pz=0,az=0;
struct{ll u,v;}ans[maxP+5];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
    ps[pz++]=2;
    for(ll i=3;i<=maxP;i+=2){
        if(!pr[i]){ps[pz++]=i;}
    }
    cin>>n;
    // với mọi số nguyên tố p nhỏ hơn n, check xem:
    // -) n - p là số nguyên tố
    // -) p < n - p
    for(ll i=0,u,v;i<pz;i++){
        u=ps[i],v=n-u;
        if(u>=v){break;} // thoát sớm
        if(!pr[v]){ans[az++]={u,v};}
    }
    lout(az);
    for(ll i=0;i<az;i++){lout(ans[i].u<<" "<<ans[i].v);}
}
