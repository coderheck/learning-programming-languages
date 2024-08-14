#include"iostream"
#include"sstream"
#include"map"
using namespace std;
#define ll long long
bool bacthang(ll n){
  ll c=9;
  while(n>0){
    if(n%10>c)
      return false;
    c=n%10;n/=10;
  }
  return true;
}
ll n,k;map<string,ll>cnt;bool f=false;
int main(){
  cin>>n>>k;
  for(ll i=1;i<=n;i++){string a;cin>>a;cnt[a]++;}
  for(ll i=1;i<=k;i++){
    string a;cin>>a;
    if(bacthang(cnt[a])&&cnt[a]>10){f=true;cout<<a<<" "<<cnt[a]<<"\n";}
  }
  if(!f){cout<<0<<" "<<0;}
}
