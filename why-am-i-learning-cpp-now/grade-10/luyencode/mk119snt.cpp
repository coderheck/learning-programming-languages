#include <iostream>
using namespace std;
#define ll long long 
const ll maxP=1000000;
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll t,l,r,pref[maxP+5];
int main(){
  cin.tie(nullptr)->sync_with_stdio(0);
  prSieve();
  pref[0]=pref[1]=0;
  for(ll i=2;i<=maxP;i++){pref[i]=pref[i-1]+!pr[i];}
  cin>>t;
  while(t--){cin>>l>>r;cout<<pref[r]-pref[l-1]<<"\n";}
}
