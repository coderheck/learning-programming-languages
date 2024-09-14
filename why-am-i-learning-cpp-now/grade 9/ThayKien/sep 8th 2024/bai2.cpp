#include"iostream"
using namespace std;
#define ll long long
bool threeOrMoreDivisors(ll n){
  int divs=0;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){
      divs++;
      while(n%i==0){n/=i;}
    }
  }
  if(n>2){divs++;}
  return (divs>=3);
}
bool isPalinNum(ll n){
  ll ch=0,org=n;
  while(n!=0){ch*=10;ch+=(n%10);n/=10;}
  return (org==ch);
}
int main(){
  ll a,b,y=0;cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(threeOrMoreDivisors(i)&&isPalinNum(i)){y++;}
  }
  cout<<y;
}
