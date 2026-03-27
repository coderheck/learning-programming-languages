#include <iostream>
using namespace std;
#define tname "cau1"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
ll n,a,b,xmax,ymax,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>a>>b;
    // gọi ax + by = n là phương trình thỏa mãn đề bài,
    // bài toán trở về tìm x,y để n <= N đề bài
    // => duyệt trâu từng x,y
    xmax=n/a+1,ymax=n/b+1;
    for(ll x=0;x<=xmax;x++){
        for(ll y=0,t;y<=ymax;y++){
            t=a*x+b*y;
            if(t<=n){res=max(res,t);}
        }
    }
    lout(res);
}
