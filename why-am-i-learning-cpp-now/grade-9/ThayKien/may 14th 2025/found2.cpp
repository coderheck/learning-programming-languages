#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,m,x,a[1000005];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  while(m--){
    cin>>x;
    cout<<(upper_bound(a,a+n,x)-a)-(lower_bound(a,a+n,x)-a)<<"\n";
  }
}
