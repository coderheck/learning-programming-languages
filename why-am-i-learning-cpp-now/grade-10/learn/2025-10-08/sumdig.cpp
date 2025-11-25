#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define ll long long 
ll l,r,s,dp[20][2][200];vector<ll>ds;
ll sol(ll pos,ll sml,ll sum){
    if(pos==ds.size()){return sum==s;}
    if(dp[pos][sml][sum]!=-1){return dp[pos][sml][sum];}
    ll lim=sml?ds[pos]:9,res=0;
    for(ll d=0;d<=lim;d++){
        ll tm=sum+d;
        if(tm>s){break;}
        res+=sol(pos+1,sml&&(d==lim),tm);
    }
    return dp[pos][sml][sum]=res;
}
ll f(ll x){
    if(x<0){return 0;}
    if(!x){return !s;}
    ds.clear();
    while(x){ds.push_back(x%10);x/=10;}
    reverse(ds.begin(),ds.end());
    memset(dp,-1,sizeof dp);
    return sol(0,1,0);
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>l>>r>>s;
    cout<<f(r)-f(l-1);
}

