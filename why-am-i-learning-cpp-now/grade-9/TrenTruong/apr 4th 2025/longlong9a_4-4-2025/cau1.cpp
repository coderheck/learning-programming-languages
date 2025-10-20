#include<iostream>
using namespace std;
#define ll long long
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool check(ll n){
  ll rev=0,n1=n;
  while(n!=0){rev=rev*10+n%10;n/=10;}
  if(rev!=n1){return false;}
  return !pr[n1];
}
ll a,b,res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  prSieve();
  cin>>a>>b;
  for(ll i=a;i<=b;i++){res+=check(i);}
  cout<<res;
}