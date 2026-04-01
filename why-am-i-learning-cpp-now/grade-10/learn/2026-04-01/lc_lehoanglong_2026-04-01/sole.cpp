#include <iostream>
#include <cstring>
using namespace std;
#define tname "sole"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll dp[15][2][85][2],ds[15],dz=0;
ll sol(ll pos,ll sml,ll sum,bool good){
    if(pos==dz){return(sum&1);}
    if(dp[pos][sml][sum][good]!=-1){return dp[pos][sml][sum][good];}
    ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		ll nsum=sum+d;
		bool ngood=good||(d!=0);
		res+=sol(pos+1,sml&&(d==lim),nsum,ngood);
	}
	return dp[pos][sml][sum][good]=res;
}
ll c(ll x){
    if(x<=0){return 0;}
    dz=0;
    while(x){ds[dz++]=x%10,x/=10;}
    rvArr(ds,dz);
    memset(dp,-1,sizeof dp);
    return sol(0,1,0,false);
}
ll a,b,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;
    res=c(b)-c(a-1);
    lout(res);
}
