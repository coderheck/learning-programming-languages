#include"iostream"
using namespace std;
#define ll long long
int main(){
  ll a,b,c;cin>>a>>b>>c;
  // delta = b^2 - 4ac
  ll delta=(b*b)-(4*a*c);
  if(delta<0){cout<<"NOSOL";}
  if(delta==0){cout<<"ONE";}
  if(delta>0){cout<<"TWO";}
}
