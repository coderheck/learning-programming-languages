#include"bits/stdc++.h"
#define ll long long
using namespace std;
int todigit(char c){
  return c-'0';
}
int main(){
  if(fopen("binarraysorting.inp","r")){
    freopen("binarraysorting.inp","r",stdin);
    freopen("binarraysorting.out","w",stdout);
  }
  int t;cin>>t;
  for(int i=1;i<=t;i++){
    int n;string s;map<int,ll>bin;bin[0]=0;bin[1]=0;cin>>n>>s;
    for(int j=0;j<n;j++){
      if(todigit(s[j])==0){bin[0]++;}else if(todigit(s[j])==1){bin[1]++;}
    }
    for(auto j:bin){
      if(j.first==0){
        for(int o=1;o<=j.second;o++){cout<<0;}
      }
    }
    for(auto j:bin){
      if(j.first==1){
        for(int o=1;o<=j.second;o++){cout<<1;}
      }
    }
    cout<<"\n";
  }
}