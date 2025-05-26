#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,x,a[1000005],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  cin>>x;
  for(ll i=0;i<n;i++){
    res+=(binary_search(a+i+1,a+n,x-a[i]));
  }
  cout<<res;
}
