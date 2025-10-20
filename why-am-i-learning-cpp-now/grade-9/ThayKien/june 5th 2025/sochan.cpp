#include <iostream>
using namespace std;
#define ll long long 
ll n,q,l,r,cnt[1000005];
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cnt[0]=0;
  cin>>n>>q;
  for(ll i=1;i<=n;i++){
    cin>>cnt[i];
    cnt[i]=cnt[i-1]+(!(cnt[i]&1));
  }
  while(q--){
    cin>>l>>r;
    cout<<cnt[r]-cnt[l-1]<<" ";
  }
}
