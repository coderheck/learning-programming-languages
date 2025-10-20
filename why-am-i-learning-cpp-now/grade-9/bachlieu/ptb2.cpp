#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
ll a,b,c,d;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>a>>b>>c;
  d=b*b-4*a*c;
  if(d<0){cout<<"PT Vo nghiem";return 0;}
  if(!d){cout<<-1.0*b/(2*a);return 0;}
  cout<<(-1.0*b+1.0*sqrt(d))/(2*a)<<" "<<(-1.0*b-1.0*sqrt(d))/(2*a);
}
