#include"iostream"
#include"algorithm"
#define ll long long
using namespace std;
ll demuoc(ll n, ll l, ll r){
  ll d=0;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0 && i>min(l,r) && i<max(l,r)){
      d++;
      ll j=n/i;
      if(j!=i){d++;}
    }
  }
  return d++;
}
int main(){
  ll l,r,n;cin>>n>>l>>r;cout<<demuoc(n,l,r);
}
