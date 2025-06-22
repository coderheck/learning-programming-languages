#include<iostream>
using namespace std;
#define ll long long
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll lcm(const ll &a,const ll &b){return(a/gcd(a,b))*b;}
ll x,y,uc,res=0;
int main(){
  cin>>x>>y;
  uc=gcd(x,y);
  for(ll i=1;i*i<=uc;i++){
    if(uc%i==0){res+=1+(i!=uc/i);}
  }
  cout<<res;
}
