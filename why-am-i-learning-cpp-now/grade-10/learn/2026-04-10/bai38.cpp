// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bai38"
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
ll n,minn=inff,minp=-1;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // vì đề bài không chỉ rõ nên ta cứ mặc định in ra vị trí đầu
    // tiên của min
    for(ll i=1,a;i<=n;i++){
        cin>>a;
        if(minn>a){minn=a,minp=i;}
    }
    lout(minn<<"\n"<<minp);
}
