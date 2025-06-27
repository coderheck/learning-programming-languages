#include<iostream>
using namespace std;
#define ll long long
ll n,a[100005],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=1;i<n-1;i++){res+=(a[i]>a[i-1]&&a[i]>a[i+1]);}
  cout<<res;
}
