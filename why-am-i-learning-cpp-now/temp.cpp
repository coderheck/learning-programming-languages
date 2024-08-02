#include"iostream"
using namespace std;
#define ll long long
const int maxN=1e6;
ll a[maxN],cnt[maxN],n;
int main(){
  cin>>n;
  for(ll i=1;i<=n;i++){cin>>a[i];}
  for(ll i=1;i<=n;i++){cnt[a[i]]++;}
  ll hiCount=LLONG_MIN,loCount=LLONG_MAX,hiIndex=0,loIndex=0;
  for(ll i=1;i<=n;i++){
    if(cnt[a[i]]>hiCount){hiCount=cnt[a[i]];hiIndex=a[i];}
    if(cnt[a[i]]<loCount){loCount=cnt[a[i]];loIndex=a[i];}
  }
  cout<<hiIndex<<" "<<loIndex;
}