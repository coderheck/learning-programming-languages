// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bai40"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    // cerr<<x<<" ";
const ll maxN=1005,maxP=10000000;
bool pr[maxP+5];
ll n,p[maxN],pz=0;
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
    cin>>n;
    // Ta chưa thể vẫy chào! Dù nhớ em cồn cào-
    // bởi giờ chí nam nhi còn kéo ta đi,
    // muốn đem công bình đến chốn hồ nghi- 
    // tuy cách xa, qua hiểm nguy hằng hà- 
    // chẳng nao núng ta không hổ thẹn với non sông, và
    // vẫn thương mong ngày có em yên vui cùng ta.
    for(ll i=1,a;i<=n;i++){
        cin>>a;
        if(!pr[a]){p[pz++]=i;}
    }
    lout(pz);
    for(ll i=0;i<pz;i++){oout(p[i]);}
}
