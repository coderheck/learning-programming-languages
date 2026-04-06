// thầy viết sai chính tả tên bài :skull: :skull: :skull:
#include <iostream>
using namespace std;
#define tname "gird"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
ll r,c,odd[5]={0,2,4,6,8},eve[5]={1,3,5,7,9};
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>r>>c;
    // ta nhận thấy bảng tuân theo các trình tự:
    // - hàng lẻ là số chẵn, hàng chẵn là số lẻ
    // - giá trị ở mỗi hàng lẻ/chẵn cách hàng lẻ/chẵn hơn kém nhau 10 đơn vị
    c--;
    lout((r&1?odd:eve)[c]+10*c);
}
