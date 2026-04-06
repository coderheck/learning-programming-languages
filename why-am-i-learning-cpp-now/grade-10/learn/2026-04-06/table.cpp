#include <iostream>
#include <cmath>
using namespace std;
#define tname "table"
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
ll n,sq;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // cùng một diện tích, hình vuông là hình có chu vi nhỏ nhất
    // trong tất cả các tứ giác
    // 1 viên đá = 1 đv diện tích = 1 ô
    // => số viên đá = diện tích của tứ giác nhỏ nhất cần để chứa
    // số viên đá đó
    // mà bảng chỉ có thể là hình chữ nhật => các trường hợp sau
    // (với a = floor(sqrt(n))):
    // - hình chữ nhật a * a
    // - hình chữ nhật a * (a + 1)
    // - hình chữ nhật (a + 1) * (a + 1)
    sq=sqrt(n);
    if(sq*sq>=n){
        lout(sq<<" "<<sq);
    }else if(sq*(sq+1)>=n){
        lout(sq<<" "<<sq+1);
    }else{
        lout(sq+1<<" "<<sq+1);
    }
}
