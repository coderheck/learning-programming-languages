#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
int n;ll a[10000005],b[10000005];
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){cin>>b[i];}
  sort(a,a+n);sort(b,b+n,greater<ll>());
  for(int i=0;i<n;i++){cout<<a[i]<<" ";}
  for(int i=0;i<n;i++){cout<<b[i]<<" ";}
}