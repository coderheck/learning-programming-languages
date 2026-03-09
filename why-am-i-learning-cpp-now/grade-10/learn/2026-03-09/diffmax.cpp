#include <iostream>
using namespace std;
#define tname "diffmax"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=100005;
ll n,a[maxN];
// yêu cầu của bài: tìm a[j]-a[i] lớn nhất trong [1;n], với i<=j
/*
    * tư tưởng chia để trị: chia mảng thành các đoạn [l;m] và [m+1;r],
    * tìm min và max của các đoạn đó và tính max_r - min_l
    * có 3 khả năng cho max(a[j]-a[i]):
    *   th1: i,j nằm trong đoạn [l;m]
    *   th2: i,j nằm trong đoạn [m+1;r]
    *   th3: i trong [l;m], j trong [m+1;r]
*/
struct ans{ll res,mn,mx;};
// res: max a[j]-a[i] của đoạn
// mn: min a[i] của đoạn
// mx: max a[i] của đoạn
ans solve(const ll *a,const ll &l,const ll &r){
    if(l==r){
        // trường hợp l==r => hiệu là 0, min=max
        return{0,a[l],a[l]};
    }
    ll m=(l+r)>>1;
    ans lt=solve(a,l,m), // giải cho th1
        rt=solve(a,m+1,r); // giải cho th2
    ll th3=rt.mx-lt.mn; // th3: i trong [l;m], j trong [m+1;r]
    return{ // gộp kết quả các lần đệ quy lại
        max(max(lt.res,rt.res),th3),
        min(lt.mn,rt.mn),
        max(lt.mx,rt.mx)
    };
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    lout(solve(a,1,n).res);
}
