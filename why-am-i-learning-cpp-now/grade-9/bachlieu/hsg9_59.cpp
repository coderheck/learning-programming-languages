#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll n,toAdd;string res="",add="";
int main(){
  cin>>n;
  if(n<2){cout<<0;return 0;}
  while(!(n&1)){res+="2.";n>>=1;}
  for(ll i=3;i*i<=n;i+=2){
    if(!(n%i)){
      toAdd=i;
      while(toAdd){add=(char)(toAdd%10+'0')+add;toAdd/=10;}
      while(n%i==0){res+=add+".";n/=i;}
      add="";
    }
  }
  if(n>1){
    cout<<res<<n;
  }else{
    res.erase(res.length()-1);
    cout<<res;
  }
}
