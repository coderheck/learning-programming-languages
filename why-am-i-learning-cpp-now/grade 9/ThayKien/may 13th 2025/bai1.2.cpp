#include<iostream>
#include<iomanip>
using namespace std;
#define ll long double
ll n,res=0,s=1;
int main(){
  cin>>n;
  for(ll i=2;i<=n;i++){
    res+=1.0/i*s;
    if(s==1){s=-1;}else{s=1;}
  }
  cout<<fixed<<setprecision(5)<<res<<"\n";
}
