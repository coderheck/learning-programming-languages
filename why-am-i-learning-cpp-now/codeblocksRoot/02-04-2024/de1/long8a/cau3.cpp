#include"bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
  if(fopen("cau3.inp","r")){
    freopen("cau3.inp","r",stdin);
    freopen("cau3.out","w",stdout);
  }
  int n,hi=0,lo=0,highest=0,lowest=INT_MAX;cin>>n;
  for(int i=0;i<n;i++){
    int cur;cin>>cur;
    if(i==0){highest=lowest=cur;}else{
      if(cur>highest){highest=cur;hi++;}
      if(cur<lowest){lowest=cur;lo++;}
    }
  }
  cout<<hi<<" "<<lo;
}
