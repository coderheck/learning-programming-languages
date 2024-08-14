#include"iostream"
using namespace std;
#define ll long long
ll n,k,a[100000],b[100000],cnt[100000];bool f=false;
bool bacthang(long long n){
  long long c=9;
  while(n>0){
    if(n%10>c)
      return false;
    c=n%10;n/=10;
  }
  return true;
}
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
