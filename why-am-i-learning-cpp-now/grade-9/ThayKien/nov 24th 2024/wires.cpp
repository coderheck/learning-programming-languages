#include"stdio.h"
using namespace std;
#define ll long long
#define maxN 100000
ll a[maxN+5],k,maxWireL=0;int n;
bool good(ll l){
  int c=0;
  for(int i=0;i<n;i++){
    c+=a[i]/l;
    if(c>=k){return true;}
  }
  return false;
}
void parseLs(){
  ll l=1,r=maxWireL,res=0;
  while(l<=r){
    ll mid=l+(r-l)/2;
    if(good(mid)){res=mid;l=mid+1;}else{r=mid-1;}
  }
  printf("%d",res);
}
int main(){
  scanf("%d%lld",&n,&k);
  for(int i=0;i<n;i++){
    scanf("%lld",&a[i]);
    if(maxWireL<a[i]){maxWireL=a[i];}
  }
  parseLs();
}