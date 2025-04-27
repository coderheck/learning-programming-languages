#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,k,a[100005],l,r,x,m;
bool bitchsearch(){
  l=0;r=n-1;
  while(l<=r){
    m=l+(r-l)/2;
    if(a[m]==x){return true;}else if(a[m]>x){r=m-1;}else{l=m+1;}
  }
  return false;
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  while(k--){
    cin>>x;
    cout<<bitchsearch()<<"\n";
  }
}
