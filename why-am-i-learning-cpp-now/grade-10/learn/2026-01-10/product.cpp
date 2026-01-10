#include <iostream>
#include <cmath>
using namespace std;
#define tname "product"
#define ll long long
const ll maxN=100005;
ll n,a[maxN],nc=0,zc=0,pc=0,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    for(ll i=1;i<=n;i++){
        if(a[i]<0){
            res+=-1+abs(a[i]);
            nc++;
        }else if(a[i]>0){
            res+=a[i]-1;
            pc++;
        }else{
            zc++;
        }
    }
    if((nc&1)){if(zc){res++,zc--;}else{res+=2;}}
    cout<<res+zc;
}
// * số số dương:
//   - vì 1 * 1 * 1 * ... * 1 = 1 nên không cần quan tâm số số dương
//     => tham lam res += khoảng cách giữa a_i và 1
// * với số số 0: đếm số số 0
// * với số số âm:
//   - tham lam res += khoảng cách giữa a_i và -1
// * sau khi đếm mọi số:
//   - số số âm là lẻ => tích âm (-1 * -1 * -1 = -1) (1)
//   - số số âm là chẵn => tích dương (-1 * -1 = 1) (2)
//   - trường hợp có >=1 số 0:
//     + (1) xảy ra: res += 1 (0 -> -1), sau đó res += số số 0 (0 -> 1)
//     + (2) xảy ra: res += số số 0
//   - trường hợp không có số 0 nào:
//     + (1) xảy ra: res += 2 (1 -> -1), sau đó res += số số 0 (0 -> 1)
//     + (2) xảy ra: res += số số 0

// các test ví dụ:
// testcase 1:
//     6
//     -3 -1 -2 2 3 1
//         => res = 8
// *) ta có khoảng cách tới 1 hoặc -1 của mỗi số: 2 + 0 + 1 + 1 + 2 + 0 = 6
// *) có 3 số âm, không có số 0 nào => res + 2 (1 -> -1)

// testcase 2:
//     6
//     -3 -1 -2 2 3 -1
//         => res = 6
// *) ta có khoảng cách tới 1 hoặc -1 của mỗi số: 2 + 0 + 1 + 1 + 2 + 0 = 6
// *) có 4 số âm => res giữ nguyên

// testcase 3:
//     6
//     -3 -1 -2 2 3 0
//         => res = 7
// *) ta có khoảng cách tới 1 hoặc -1 của mỗi số: 2 + 0 + 1 + 1 + 2 + 0 = 6
// *) có 3 số âm, có 1 số 0 => res + 1 (0 -> -1)
