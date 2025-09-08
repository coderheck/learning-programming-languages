#include <iostream>
using namespace std;
#define ll long long 
ll n,a,one=0,two=0,tot=0,half;
int main(){
  cin.tie(nullptr)->sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;
    one+=(a==100);two+=(a==200);
  }
  tot=one*100+two*200;
  if(tot%200!=0&&tot%100!=0){cout<<"NO\n";return 0;}
  half=tot/2;
  for(ll i=0;i<=two;i++){
    ll r=half-i*200,y=r/100;
    if(r<0||r%100!=0){continue;}
    if(y<=one){cout<<"YES\n";return 0;}
  }
  cout<<"NO\n";
}
