#include <iostream>
using namespace std;
#define tname "restaurant"
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
    // hình vuông lớn nhất có thể cắt được có chiều dài
    // cạnh = gcd(h,w)
    // số hình vuông cắt được = diện tích hình gốc/diện
    // tích hình vuông lớn nhất
    for(ll q=1,h,w,gc;q<=Q;q++){
        cin>>h>>w;
        gc=gcd(h,w);
        lout((h*w)/(gc*gc));
    }
}
