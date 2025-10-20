#include<iostream>
#define ll long long
using namespace std;
int main(){
  if(fopen("bai6.inp","r")){
    freopen("bai6.inp","r",stdin);
    freopen("bai6.out","w",stdout);
  }
  int n,m;cin>>n>>m;int a[n];ll maxTong=0;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i+2<n;i++){
    if(a[i]+a[i+1]+a[i+2]>maxTong){maxTong=a[i]+a[i+1]+a[i+2];}
  }
  cout<<maxTong;
}
