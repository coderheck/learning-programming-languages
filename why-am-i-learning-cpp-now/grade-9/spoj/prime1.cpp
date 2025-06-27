#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
void segSieve(const ll &l,const ll &r){
  ll lim=sqrt(r);
  vector<ll>prs;
  vector<char>mark(lim+1,false);
  vector<char>isPr(r-l+1,true);
  for(ll i=2;i<=lim;i++){
    if(!mark[i]){
      prs.push_back(i);
      for(ll j=i*i;j<=lim;j+=i){mark[j]=true;}
    }
  }
  for(ll i=0;i<prs.size();i++){
    ll a=prs[i];
    for(ll j=max(a*a,(l+a-1)/a*a);j<=r;j+=a){isPr[j]=false;}
  }
  if(l==1){isPr[0]=false;}
  for(ll i=l;i<=r;i++){if(i!=1&&isPr[i]){cout<<i<<"\n";}}
  cout<<"\n";
}
ll t,l,r;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>t;
  while(t--){
    cin>>l>>r;
    segSieve(l,r);
  }
}
