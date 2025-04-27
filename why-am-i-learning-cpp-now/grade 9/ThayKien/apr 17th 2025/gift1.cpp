#include<iostream>
using namespace std;
#define ll long long
ll n,a[1000005],maxe=0,res=0;
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  maxe=res=a[0];
  for(ll i=1;i<n;i++){
    maxe=max(maxe+a[i],a[i]);
    res=max(res,maxe);
  }
  cout<<res;
}
