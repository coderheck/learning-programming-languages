#include"iostream"
using namespace std;
#define ll long long
bool bacthang(ll a){
  if(a<10){return false;}
  int r=a%10,l=(a/10)%10;
  while(a!=0&&a/10!=0){
    if(r<=l){return false;}
    a/=10;
    r=a%10,l=(a/10)%10;
  }
  return true;
}
ll n,k,a[100000],b[100000],cnt[100000];bool f=false;
int main(){
  cin>>n>>k;
  for(ll i=1;i<=n;i++){cin>>a[i];}
  for(ll i=1;i<=k;i++){cin>>b[i];}
  for(ll i=1;i<=n;i++){cnt[a[i]]++;}
  for(ll i=1;i<=k;i++){
    if(bacthang(cnt[b[i]])&&cnt[b[i]]>10){
      cout<<b[i]<<" "<<cnt[b[i]]<<"\n";
      f=true;
    }
  }
  if(!f)cout<<0<<" "<<0;
}
