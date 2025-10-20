#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll n,k,a[100005],res=0,l=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(ll r=1;r<n;r++){
    if(a[r]-a[l]<=k){res=max(res,r-l+1);}else{l++;}
    res=r-l+1;
  }
  cout<<res;
}
