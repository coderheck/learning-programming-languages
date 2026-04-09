#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <vector>
#include <cstddef>
#include <algorithm>
using namespace std;
#define tname "bai18"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x; \
    // cerr<<x;
// const ll inff=1LL<<62;
size_t n;
vector<ll>d;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // ok bro
    while(!(n&1)){n>>=1,d.push_back(2);}
    for(size_t i=3;i*i<=n;i+=2){
        while(n%i==0){n/=i,d.push_back(i);}
    }
    if(n>1){d.push_back(n);}
    sort(d.begin(),d.end());
    for(size_t i=0;i<d.size();i++){
        oout(d[i]);
        if(i+1<d.size()){oout("*");}
    }
}
