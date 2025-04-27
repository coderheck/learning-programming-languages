#include<iostream>
using namespace std;
#define ll long long
ll n,q,x,a[500005];
void bitchsearch(){
  ll l=0,r=n-1,m,res=-1;
  while(l<=r){
    m=l+(r-l)/2;
    if(a[m]>x){res=m;r=m-1;}else{l=m+1;}
  }
  cout<<res+1<<"\n";
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>q;
  for(ll i=0;i<n;i++){cin>>a[i];}
  while(q--){
    cin>>x;
    bitchsearch();
  }
}
