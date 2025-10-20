#include"bits/stdc++.h"
using namespace std;
#define ll long long
bool checkChiaHet(ll n,ll a,ll b,ll c){
  bool chiaA=(n%a==0),chiaB=(n%b==0),chiaC=(n%c==0);
  if( (chiaA==chiaB && chiaB==true && chiaC==false) || (chiaA==chiaC && chiaC==true && chiaB==false) || (chiaC==chiaB && chiaB==true && chiaA==false) ){return true;}else{return false;}
}
int main(){
  if(fopen("bai01.inp","r")){
    freopen("bai01.inp","r",stdin);
    freopen("bai01.out","w",stdout);
  }
  ll n,a,b,c,d=0;cin>>n>>a>>b>>c;
  for(ll i=1;i<=n;i++){
    if(checkChiaHet(i,a,b,c)==true){d++;}
  }
  cout<<d;
}
