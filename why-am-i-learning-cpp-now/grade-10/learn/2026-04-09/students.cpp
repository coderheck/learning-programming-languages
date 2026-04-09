#include <iostream>
#include <algorithm>
using namespace std;
#define tname "students"
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
ll gcd(const ll &a,const ll &b){return(b)?gcd(b,a%b):a;}
ll Q,p[13]={40,45,50,55,60,65,70,75,80,85,90,95,100};
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // làm như đề bài yêu cầu
    for(ll q=1,a;q<=Q;q++){
        cin>>a;
        if(a<38){lout(a);continue;} // không được làm tròn
        ll pp=*lower_bound(p,p+13,a); // tìm mốc điểm đầu tiên >= a
        lout((pp-a<3?pp:a));
    }
}
