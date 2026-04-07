#include <iostream>
using namespace std;
#define tname "path"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):((a)==(b)?-inff:(b)))
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
    // thực chất các phép biến đổi trong đề bài là các bước của
    // thuật toán tìm gcd của Euclid
    // bài toán trở về xác định gcd của (u;v) và (x;y)
    for(ll q=1,u,v,x,y;q<=Q;q++){
        cin>>u>>v>>x>>y;
        lout((gcd(u,v)==gcd(x,y)?"YES":"NO"));
    }
}
