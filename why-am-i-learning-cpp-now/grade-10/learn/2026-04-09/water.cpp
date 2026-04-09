#include <iostream>
using namespace std;
#define tname "water"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
ll gcd(const ll &a,const ll &b){return(b)?gcd(b,a%b):a;}
ll Q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // lại một bài liên quan đến gcd!
    // ta có thể lấy được chính xác c bằng hai bình a,b khi và
    // chỉ khi: c <= max(a,b) và c chia hết cho gcd(a,b)
    for(ll q=1,a,b,c,g;q<=Q;q++){
        cin>>a>>b>>c;
        g=gcd(a,b);
        lout((c<=max(a,b)&&c%g==0?"YES":"NO"));
    }
}
