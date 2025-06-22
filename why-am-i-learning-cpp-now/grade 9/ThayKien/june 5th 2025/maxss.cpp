#include<iostream>
#include<string>
using namespace std;
#define ll long long 
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
ll n,k,m,cnt[260],it='z',res=0,val[27];string s;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  for(ll i=0;i<160;i++){cnt[i]=0;}
  for(ll i=1;i<=26;i++){val[i]=i;}
  cin>>n>>k>>m>>s;
  for(ll i=0;i<s.size();i++){cnt[s[i]-96]++;}
  for(ll i=26;i>=1&&k>0;i--){
    if(!cnt[i]){continue;}
    ll uh=min(min(m,cnt[i]),k);
    res+=uh*i;k-=uh;
  }
  cout<<res;
}
