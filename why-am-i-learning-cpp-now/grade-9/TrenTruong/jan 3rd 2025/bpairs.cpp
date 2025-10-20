#include"iostream"
using namespace std;
#define ll long long
int n;ll a[300005],cnt[300005],res=0;
ll tcs(ll x){
  ll r=0;
  while(x!=0){r+=(x%10);x/=10;}
  return r;
}
int main(){
  cin>>n;
  cnt[0]=1;       
  for(int i=0;i<n;i++){
    cin>>a[i];
    a[i]=tcs(a[i]);
    res+=cnt[a[i]];
    cnt[a[i]]++;
  }
  cout<<res;
}