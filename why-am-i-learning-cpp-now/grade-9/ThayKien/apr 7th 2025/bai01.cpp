#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,m,i=0,j=0,res=0,a[1000005],b[1000005];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<m;i++){cin>>b[i];}
  sort(a,a+n);sort(b,b+m);
  while(i<n&&j<m){
    if(a[i]<=b[j]){
      i++;
    }else{
      i++;j++;res++;
    }
  }
  cout<<res;
}