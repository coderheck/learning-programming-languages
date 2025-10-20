#include<iostream>
using namespace std;
#define ll long long 
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll n,k,a[105],l=0,r=0,s=0,res=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(;r<n;r++){
    s+=a[r];
    while(s>k){s-=a[l];l++;}
    res=max(res,r-l+1);
  }
  cout<<res;
}
