#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
ll m,n,i=0,j=0,res=0,a[100005],b[100005];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>m>>n;
  for(ll i=0;i<m;i++){cin>>a[i];}
  for(ll i=0;i<n;i++){cin>>b[i];}
  sort(a,a+m,greater<ll>());sort(b,b+n);
  while(i<m&&j<n){
    if(a[i]>b[j]){
      i++;j++;res++;
    }else{
      j++;
    }
  }
  cout<<res;
}