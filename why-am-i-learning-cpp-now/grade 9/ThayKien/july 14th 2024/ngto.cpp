#include"iostream"
#include"vector"
#include"utility"
using namespace std;
#define ll long long
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;}}
  return nt;
}
int main(){
  ll n,c=0;cin>>n;vector<pair<ll,ll>>res;
  for(ll i=2;i<n/2;i++){
    if(nto(i)&&nto(n-i)&&i<n-i){
      pair sech(i,n-i);
      res.push_back(sech);
      c++;
    }
  }
  cout<<c<<"\n";
  for(auto i:res){cout<<i.first<<" "<<i.second<<"\n";}
}