#include"iostream"
using namespace std;
#define ll long long
int sumDigits(ll n){
  int r=0;
  while(n!=0){r+=n%10;n/=10;}
  return r;
}
int t,dc=0,fc=0;ll n;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>t;
  while(t--){
    dc=fc=0;
    cin>>n;dc=sumDigits(n);
    while(!(n&1)){fc+=2;n>>=1;}
    for(ll i=3;i*i<=n;i+=2){
      while(n%i==0){fc+=sumDigits(i);n/=i;}
    }
    if(n>1){fc+=sumDigits(n);}
    cout<<(dc==fc)<<"\n";
  }
}