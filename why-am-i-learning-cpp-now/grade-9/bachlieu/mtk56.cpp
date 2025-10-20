#include"iostream"
using namespace std;
#define ll long long
bool procArg(ll &n){
  ll m=0;int t=0;
  while(n!=0){m+=n%10;n/=10;}
  for(ll i=2;i*i<=m;i++){
    if(m%i==0){
      t+=i;ll j=m/i;
      if(i!=j){t+=j;}
    }
  }
  return(m==(t+1));
}
int n,c=0;ll a;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  while(n--){
    cin>>a;
    c+=procArg(a);
  }
  cout<<c;
}