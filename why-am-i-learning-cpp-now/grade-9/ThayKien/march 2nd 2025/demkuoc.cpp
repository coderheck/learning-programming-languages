#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long
ll l,r,k,res=0,maxP=20000000;
bool pr[20000005];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int main(){
  cin>>l>>r>>k;
  if(k==2&&r<=maxP){
    prSieve();
    for(ll i=l;i<=r;i++){res+=!pr[i];}
    cout<<res;
  }else if(k==3){
    maxP=10000000;
    prSieve();
    for(ll i=sqrt(l);i*i<=r;i++){res+=!pr[i];}
    cout<<res;
  }else{
    vector<int>div(1000005,1);
    for(int i=1;i<=1000005;i++){
      for(int j=i*2;j<=1000005;j+=i){div[j]++;}
    }
    for(int i=l;i<=r;i++){res+=(div[i]==k);}
    cout<<res;
  }
}