#include <iostream>
#include <cstring>
using namespace std;
#define tname "numbers"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll modN=1000000007;
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll ds[1005],dz=0,dp[1005][2][10]; // [pos][sml][lst]
ll sol(ll pos,bool sml,ll lst){
    if(pos==dz){return true;} // vị trí cuối cùng chắc chắn đã sort
    if(dp[pos][sml][lst]!=-1){return dp[pos][sml][lst]%modN;}
    ll lim=sml?ds[pos]:9,res=0;
    for(ll d=0;d<=lim;d++){
        if(d<lst){continue;}
        res=(res+sol(pos+1,sml&&(d==lim),d))%modN;
    }
    return dp[pos][sml][lst]=res;
}
ll c(ll x){
    // không cần xử lí trường hợp a<=0 vì 1<=L
    dz=0;
    while(x){ds[dz++]=x%10,x/=10;}
    rvArr(ds,dz);
    memset(dp,-1,sizeof dp);
    return sol(0,1,0);
}
bool check_sub1(ll x){
    while(x>=10){
        ll lst=x%10,nd=(x/10)%10;
        if(lst<nd){return false;}
        x/=10;
    }
    return true;
}
void sub1(){
    ll a,b,res=0;
    cin>>a>>b;
    for(ll i=a;i<=b;i++){
        if(check_sub1(i)){res++;}
    }
    lout(res);
}
void sub2(){
    ll a,b;
    cin>>a>>b;
    lout(c(b)-c(a-1));
}
ll a,b;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".ans","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    sub2();
    // cin>>a>>b;
    // lout(c(b)-c(a-1));
}
