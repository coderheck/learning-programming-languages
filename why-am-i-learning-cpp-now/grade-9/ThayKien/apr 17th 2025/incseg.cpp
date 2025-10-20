#include<iostream>
using namespace std;
#define ll long long
ll n,a[1000005],maxL=1,res=0;
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=1;i<n;i++){
    if(a[i]>=a[i-1]){
      maxL++;
    }else{
      res=max(res,maxL);
      maxL=1;
    }
  }
  cout<<res;
}
