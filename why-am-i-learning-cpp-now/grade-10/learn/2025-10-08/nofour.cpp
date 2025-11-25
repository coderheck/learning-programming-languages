#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define ll long long 
ll l,r,dp[20][2][200];vector<ll>ds;
ll sol(ll pos,ll sml,ll lst){
    if(pos==ds.size()){return 1;}
    if(dp[pos][sml][lst]!=-1){return dp[pos][sml][lst];}
    ll lim=sml?ds[pos]:9,res=0;
    for(ll d=0;d<=lim;d++){
        if(d==4){continue;}
        res+=sol(pos+1,sml&&(d==lim),d);
    }
    return dp[pos][sml][lst]=res;
}
ll f(ll x){
    if(x<0){return 0;}
    if(!x){return 1;}
    ds.clear();
    while(x){ds.push_back(x%10);x/=10;}
    reverse(ds.begin(),ds.end());
    memset(dp,-1,sizeof dp);
    return sol(0,1,0);
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>l>>r;
    cout<<f(r)-f(l-1);
}
