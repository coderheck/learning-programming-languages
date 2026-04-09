#include <iostream>
using namespace std;
#define tname "tree"
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
ll Q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // 2 vòng: h -> 2h -> 2h + 1
    // cứ 2 vòng tạo thành 1 chu kỳ, gọi k = floor(n/2)
    // tính h với vài k, ta nhận thấy h = 2^(k+1) - 1
    // nếu n lẻ thì còn 1 lần sinh trưởng ở xuân nữa => nhân 2
    for(ll q=1,n,k,h;q<=Q;q++){
        cin>>n;
        k=n>>1,h=(1LL<<(k+1))-1;
        if(n&1){h<<=1;}
        lout(h);
    }
}
