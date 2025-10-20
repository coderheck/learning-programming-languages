#include<iostream>
using namespace std;
#define ll long long
ll m,n,k;
bool isBitch(const ll &a){
  ll rem=(m-2*a)+(n-a);
  return rem>=k;
}
ll bitchsearch(){
  ll l=0,r=500000000,res=0;
  while(l<=r){
    ll i=l+(r-l)/2;
    if(isBitch(i)){
      l=i+1;res=i;
    }else{
      r=i-1;
    }
  }
  return res;
}
int main(){
  cin>>m>>n>>k;
  cout<<bitchsearch();
}