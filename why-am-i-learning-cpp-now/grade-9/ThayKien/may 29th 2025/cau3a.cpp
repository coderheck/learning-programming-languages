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
bool tcs(ll &a){
  ll r=0;
  while(a){r+=a%10;a/=10;}
  return r;
}
ll n,a,res=0;
int main(){
  prSieve();
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){cin>>a;res+=(!pr[a]&&!pr[tcs(a)]);}
  cout<<res;
}
