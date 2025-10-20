#include"iostream"
using namespace std;
#define ll long long
const int maxN=1000000;
ll n,k,a[maxN+5],maxwl=0;
bool good(ll l){
  ll c=0;
  for(int i=0;i<n;i++){
    c+=a[i]/l;
    if(c>=k){return true;}
  }
  return false;
}
void parsethewires(){
  ll l=1,r=maxwl,res=0;
  while(l<=r){
    ll mid=l+(r-l)/2;
    if(good(mid)){res=mid;l=mid+1;}else{r=mid-1;}
  }
  cout<<res;
}
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(maxwl<a[i]){maxwl=a[i];}
  }
  parsethewires();
}