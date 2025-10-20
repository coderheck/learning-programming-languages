#include <cstdio>
#include<iostream>
using namespace std;
#define ll long long
ll currenc(const char &c){
  if(c=='U'){
    return 25570;
  }else if(c=='E'){
    return 28662;
  }else if(c=='J'){
    return 179;
  }else if(c=='C'){
    return 3487;
  }else if(c=='B'){
    return 756;
  }else{return 0;}
}
ll n,g;char c;
int main(){
  if(fopen("cau1.inp","r")){
    freopen("cau1.inp","r",stdin);
    freopen("cau1.out","w",stdout);
  }
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>c>>g;
    cout<<g*currenc(c)<<"\n";
  }
}
