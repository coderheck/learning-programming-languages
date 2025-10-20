#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,m,a[100005],b[100005],res=0,ai=0,bi=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>m>>n;
  for(ll i=0;i<m;i++){cin>>a[i];}
  for(ll i=0;i<n;i++){cin>>b[i];}
  sort(a,a+m);sort(b,b+n);
  while(ai<m&&bi<n){
    if(a[ai]>b[bi]){res++;ai++;bi++;}else{ai++;}
  }
  cout<<res;
}

