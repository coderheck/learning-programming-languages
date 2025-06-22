#include<iostream>
using namespace std;
#define ll long long 
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll q,l,r,cnt[1000005];
int main(){
  prSieve();
  cin.tie(0)->sync_with_stdio(0);
  cnt[0]=0;
  for(ll i=1;i<=maxP;i++){
    cnt[i]=cnt[i-1]+(!pr[i]&&!pr[(i+1)/2]);
  }
  cin>>q;
  while(q--){
    cin>>l>>r;
    cout<<cnt[r]-cnt[l-1]<<"\n";
  }
}
