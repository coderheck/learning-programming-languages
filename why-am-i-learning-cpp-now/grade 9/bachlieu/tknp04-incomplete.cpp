#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
ll n,t,x;
vector<ll>a;
void fucksearch(){
  ll l=0,r=n-1,m,res=0;
  while(l<=r){
    m=l+(r-l)/2;
    if(a[m]<=x){
      res=a[m];
      l=m+1;
    }else{
      r=m-1;
    }
  }
  cout<<res<<"\n";
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  a.reserve(1000000000);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a.begin(),a.begin()+n);
  cin>>t;
  while(t--){
    cin>>x;
    // cout<<upper_bound(a.begin(),a.begin()+n,x)-a.begin()<<"\n";
    fucksearch();
  }
}