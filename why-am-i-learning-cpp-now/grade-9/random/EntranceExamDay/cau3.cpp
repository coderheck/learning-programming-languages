#include<iostream>
#include <climits>
using namespace std;
#define ll long long
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll gcd(const ll& a,const ll& b){return(!b)?a:gcd(b,a%b);}
ll c,d,prod,res=LLONG_MAX-1;
int main(){
  cin>>c>>d;
  prod=c*d;
  for(ll a=1;a*a<=prod;a++){
    ll b=prod/a,gc=gcd(a,b);
    if(gc==c){res=min(res,a+b);}
  }
  if(res!=LLONG_MAX-1){cout<<res;}else{cout<<-1;}
}
