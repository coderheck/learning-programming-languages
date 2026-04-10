#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <cmath>
using namespace std;
#define tname "prodif"
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
// const ll inff=1LL<<62;
ll Q,d,p;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // phân tích các điều kiện:
    // +) |a - b| = d  =>  d < 0 -> vô nghiệm
    // khi này ta có 2 trường hợp:
    // 
    // TH1: a - b = d => a = b + d
    // thay vào a*b = p => (b+d) * b = p <=> b^2 + d*b - p = 0
    // => b = (-d ± sqrt(d^2 + 4*p)) / 2
    // vì b nguyên nên 1. d^2 + 4*p >=0 đồng thời là số chính phương 
    // và 2. -d ± sqrt(d^2 + 4*p) chia hết cho 2
    // 
    // TH2: a - b = -d => a = b - d
    // suy ra được phương trình b^2 - d*b - p = 0
    // từ đó giải như TH1, tuy nhiên chú ý dấu của phương trình dưới 
    // b = (d ± sqrt(d^2 + 4*p)) / 2
    // 
    // chú ý trường hợp D = 0 => TH1 trùng TH2 => chia đôi 
    while(Q--){
        cin>>d>>p;
        if(d<0){lout("0");continue;}
        ll delta=d*d+p*4,r=sqrt(delta);
        if(r*r!=delta){lout("0");continue;}
        ll res=0;
        // a - b = d
        if(!((-d+r)&1)){res++;}
        if(!((-d-r)&1)){res++;}
        // a - b = -d
        if(!((d+r)&1)){res++;}
        if(!((d-r)&1)){res++;}
        if(!d){res>>=1;}
        lout(res);
    }
}
