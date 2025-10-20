#include<iostream>
using namespace std;
#define ll long long
#define mod 1000000007
ll n,twoc=0,fivc=0,tenc=0,othc=0,a,res=0;
int main(){
  if(fopen("cau3.inp","r")){
    freopen("cau3.inp","r",stdin);
    freopen("cau3.out","w",stdout);
  }
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;
    if(a%10==0){
      res=res%mod+(tenc+othc+twoc+fivc)%mod;
      tenc++;twoc++;fivc++;
    }else if(a%2==0){
      res=res%mod+(fivc+tenc)%mod;
      twoc++;
    }else if(a%5==0){
      res=res%mod+(twoc+tenc)%mod;
      fivc++;
    }else{
      res=res%mod+tenc%mod;
    }
  }
  cout<<res;
}
