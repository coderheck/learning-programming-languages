#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
ll n,a[105],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n,greater<ll>());
  for(ll i=0;i<n;i++){
    if(a[i]-i<0){break;}else{res+=a[i]-i;}
  }
  cout<<res;
}
