#include<iostream>
using namespace std;
#define ll long long
#define maxP 10000000
bool pr[maxP+5];ll cnt[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool tcs(ll n){
  ll res=0;
  while(n!=0){res+=n%10;n/=10;}
  return!(res&1);
}
ll l,r,res=0;
int main(){
  if(fopen("cau1b5.inp","r")){
    freopen("cau1b5.inp","r",stdin);
    freopen("cau1b5.out","w",stdout);
  }
  prSieve();
  cin>>l>>r;
  for(ll i=l;i<=r;i++){
    res+=(!pr[i]&&tcs(i));
  }
  cout<<res;
}
