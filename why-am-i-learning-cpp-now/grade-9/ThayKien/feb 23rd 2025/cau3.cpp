#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int n,k;ll a[10000005];
bool diamond(const ll &r){
  ll t=0,i=0,c=0;
  while(i<n){
    t++;c=a[i]+r;
    while(i<n&&a[i]<=c+r){i++;}
    if(t>k){return false;}
  }
  return true;
}
void bitchsearch(){
  ll l=0,r=a[n-1]-a[0];
  while(l<r){
    ll m=l+(r-l)/2;
    if(diamond(m)){r=m;}else{l=m+1;}
  }
  cout<<l;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  bitchsearch();
}