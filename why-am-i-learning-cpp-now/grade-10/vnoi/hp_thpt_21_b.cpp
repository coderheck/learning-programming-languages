#include <iostream>
using namespace std;
#define tname "hp_thpt_23_a"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
const ll maxN=100005,maxP=10000010;
bool pr[maxP+5];
bool prpr(const ll &x){
    if(x<=maxP){return!pr[x];}else{
        if(x<2){return false;}
        if(x==2){return true;}
        for(ll i=3;i*i<=x;i+=2){
            if(!(x%i)){return false;}
        }
        return true;
    }
}
ll n,Q,a[maxN],res=0,ps[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    // sub 1,2: sàng eratosthenes đến 10^7+10 do có thêm chữ số
    // vào sau
    // sub 2: vẫn tạo sàng 10^7, tuy nhiên
    // trường hợp > 10^7 thì sẽ kiểm tra nguyên tố sqrt(n)
    // O(t*n*sqrt(n) + n) ~~ 10^8 + 10^3
    for(ll i=1;i<=n;i++){
        if(!prpr(a[i])){a[i]=0;continue;}
        ll b=a[i]*10;
        if(!prpr(b+1)&&!prpr(b+3)&&!prpr(b+7)&&!prpr(b+9)){
            a[i]=0;continue;
        }
        bool ok=true;
        while(a[i]){
            if(!prpr(a[i])){ok=false;break;}
            a[i]/=10;
        }
        a[i]=ok;
    }
    for(ll i=1;i<=n;i++){ps[i]=ps[i-1]+a[i];}
    cin>>Q;
    for(ll q=1,l,r;q<=Q;q++){
        cin>>l>>r;
        lout(ps[r]-ps[l-1]);
    }
}
