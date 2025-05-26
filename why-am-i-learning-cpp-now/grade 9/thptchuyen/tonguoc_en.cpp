#include<iostream>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll a,b,gc,res=0;
int main(){
  cin>>a>>b;
  gc=gcd(a,b/3);
  for(ll i=1;i*i<=gc;i++){
    if(gc%i==0&&a%i==0&&b%(i*3)==0){
      res+=i;
      ll j=gc/i;
      if(i!=j&&a%j==0&&b%(j*3)==0){res+=j;}
    }
  }
  cout<<res;
}
