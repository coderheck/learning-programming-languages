#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define ll long long 
const ll maxP=200;
bool pr[maxP+5];
ll l,r,dp[20][2][200];vector<ll>ds;
ll sol(ll pos,ll sml,ll sum){
    if(pos==ds.size()){return pr[sum];}
    if(dp[pos][sml][sum]!=-1){return dp[pos][sml][sum];}
    ll lim=sml?ds[pos]:9,res=0;
    for(ll d=0;d<=lim;d++){
        res+=sol(pos+1,sml&&(d==lim),sum+d);
    }
    return dp[pos][sml][sum]=res;
}
ll f(ll x){
    if(x<=0){return 0;}
    ds.clear();
    while(x){ds.push_back(x%10);x/=10;}
    reverse(ds.begin(),ds.end());
    memset(dp,-1,sizeof dp);
    return sol(0,1,0);
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    memset(pr,true,sizeof pr);
    pr[0]=pr[1]=false;
    for(ll i=2;i*i<=maxP;i++){
        if(pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=false;}
        }
    }
    cin>>l>>r;
    cout<<f(r)-f(l-1);
}


