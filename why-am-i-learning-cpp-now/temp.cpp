#include"iostream"
#include"vector"
#include"utility"
#define ll long long
using namespace std;
vector<pair<ll,ll>>factorize(int n){
  vector<pair<ll,ll>>factors;
  factors[0].first=2; factors[0].second=0;
  ll iter=1;
  while(n%2==0){factors[0].second++;n/=2;}
  for(ll i=3;i*i<=n;i+=2){
    factors[iter].first=i;
    factors[iter].second=0;
    while(n%i==0){
      factors[iter].second++;
      n/=2;
    }
    iter++;
  }
  if(n>2){factors[iter].first=n;factors[iter].second=1;}
  return factors;
}
int main(){
  ll num=315;
  vector<pair<ll,ll>>facts=factorize(num);
  cout<<num<<": ";
  for(pair<ll,ll>i: facts){
    if(i.second>0){cout<<i.first<<" - "<<i.second<<"\n";}
  }
}
