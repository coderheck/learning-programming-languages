#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int n;ll x,a[100005];
void shitstorm(){
  ll l=0,r=n;
  while(l<=r){
    ll m=l+(r-l)/2;
    if(a[m]==x){
      cout<<"Y";return;
    }else if(a[m]>x){r=m-1;}else{l=m+1;}
  }
  cout<<"N";
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>x;
  for(int i=0;i<n;i++){cin>>a[i];}
  // if(binary_search(a,a+n,x)){cout<<"Y";}else{cout<<"N";}
  shitstorm();
}