// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bacthang"
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
// const ll maxN=10005;
ll n,a,lst,nnd,res=0;bool good=true;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // oooh my pccccccc
    while(n--){
        cin>>a;good=true;
        if(a<10){continue;}
        while(a>10){
            lst=a%10,nnd=(a/10)%10;
            if(nnd>=lst){good=false;break;}
            a/=10;
        }
        if(good){res++;}
    }
    lout(res);
}
