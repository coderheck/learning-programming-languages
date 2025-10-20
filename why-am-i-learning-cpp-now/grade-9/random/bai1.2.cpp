#include <iomanip>
#include<iostream>
using namespace std;
#define ld long double
ld n,s=0;
int main(){
  cin>>n;
  for(int i=2;i<=n;i++){
    ld a=1.0/i;
    if(i&1){a*=-1.0;}
    s+=a;
  }
  cout<<fixed<<setprecision(5)<<s;
}
