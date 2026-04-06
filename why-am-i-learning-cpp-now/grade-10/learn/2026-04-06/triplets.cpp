#include <iostream>
using namespace std;
#define tname "triplets"
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
ll a[3],b[3],t1=0,t2=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    // không giải được bài này thì không có tư cách gọi mình là học sinh lớp tin
    cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
    for(ll q=0;q<3;q++){
        if(a[q]>b[q]){t1++;}else if(a[q]<b[q]){t2++;}
    }
    lout(t1<<" "<<t2);
}
