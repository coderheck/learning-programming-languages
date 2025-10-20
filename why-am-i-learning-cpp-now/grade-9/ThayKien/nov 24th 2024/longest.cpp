#include"iostream"
using namespace std;
#define maxN 1000000000
#define ll long long
ll n,s,a[maxN+2];
bool good(ll l){
  ll sum=0;
  for(ll i=0;i<l;i++){
    sum+=a[i];
  }
  if(sum<s){return true;}
  for(ll i=l;i<n;i++){
    sum=sum+a[i]-a[i-l];
    if(sum<s){return true;}
  }
  return false;
}
void parse(){
  ll l=1,r=maxN-1,res=0;
  while(l<=r){
    ll mid=l+(r-l)/2;
    if(good(mid)){
      res=mid;
      l=mid+1;
    }else{r=mid-1;}
  }
  cout<<res;
}
int main(){
  cin>>n>>s;
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  parse();
}