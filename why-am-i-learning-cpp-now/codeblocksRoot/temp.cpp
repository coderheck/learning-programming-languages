#include"iostream"
#define ll long long
ll gcd(ll a, ll b){
  ll c=a,d=b;
  while(c!=b){if(c>b){c-=b;}else{b-=c;}}
  return c;
}
using namespace std;
int main(){
  ll a,b;cin>>a>>b;
  if(b==0){cout<<"ERROR";}else{
    cout<<a/gcd(a,b)<<" "<<b/gcd(a,b);
  }
}
