// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <algorithm>
using namespace std;
#define tname "bai41"
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
const ll maxN=1005;
ll n,a[maxN];
bool cmpfn(const ll &a,const ll &b){
    if(b&1){ // b là số lẻ
        if(a&1){ // a cũng là số lẻ => so sánh bình thường
            return a<=b;
        }else{ // a là số chẵn => a xếp đầu, b xếp sau
            return true;
        }
    }else{ // b là số chẵn 
        if(a&1){ // a là số lẻ => b xếp đầu, a xếp sau
            return false;
        }else{ // a cũng là số chẵn => so sánh bình thường
            return a<=b;
        }
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // khó viết hàm compare cho sort là chính
    for(ll i=1;i<=n;i++){cin>>a[i];}
    sort(a+1,a+n+1,cmpfn);
    for(ll i=1;i<=n;i++){oout(a[i]);}
}
