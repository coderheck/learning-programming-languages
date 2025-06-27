#include"iostream"
#include"sstream"
#include"map"
using namespace std;
#define ll long long
bool bacthang(ll n){
  int du=0;
  if(n<11) return false;
  while(n>0){
    du=n%10;n/=10;
    if(n%10>=du)return false;
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
