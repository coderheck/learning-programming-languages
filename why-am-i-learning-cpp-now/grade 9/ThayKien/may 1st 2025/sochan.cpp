#include<iostream>
using namespace std;
#define ll long long
ll n,q,a[1000000],l,r;
int main(){
  if(fopen("sochan.inp","r")){
    freopen("sochan.inp","r",stdin);
    freopen("sochan.out","w",stdout);
  }
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>q;
  for(ll i=1;i<=n;i++){cin>>a[i];a[i]=a[i-1]+!(a[i]&1);}
  while(q--){
    cin>>l>>r;
    cout<<a[r]-a[l-1]<<" ";
  }
}