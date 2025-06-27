#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
#define ll long long
ll n,t=0,l=1,r=2000000000,m,v;
int main(){
  if(fopen("xoaxau.inp","r")){
    freopen("xoaxau.inp","r",stdin);
    freopen("xoaxau.out","w",stdout);
  }
  cin>>n;
  t=(n-2025)*2;
  while(l<=r){
    m=l+(r-l)/2;
    v=m*(m+1);
    if(v==t){
      cout<<m;return 0;
    }else if(v>t){
      r=m-1;
    }else{
      l=m+1;
    }
  }
  cout<<-1;
}
