#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
ll n,m,ai=0,bi=0,a[1000005],b[1000005],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<m;i++){cin>>b[i];}
  sort(a,a+n,greater<ll>());sort(b,b+m);
  while(ai<n&&bi<m){
    if(a[ai]>b[bi]){res++;ai++;bi++;}else{bi++;}
  }
  cout<<res;
}
