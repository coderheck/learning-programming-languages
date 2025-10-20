#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
int t;ll a;
bool isTriNum(ll n){
  ll k=(-1+sqrt(1+8*n))/2;
  return k*(k+1)/2==n;
}
int main(){
  cin>>t;
  while(t--){
    bool f=false;
    cin>>a;
    for(ll k1=1;k1*(k1+1)/2<=a;k1++){
      ll t1=k1*(k1+1)/2;
      ll t2=a-t1;
      if(isTriNum(t2)){f=true;break;}
    }
    f?cout<<"YES\n":cout<<"NO\n";
  }
}