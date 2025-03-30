#include<iostream>
using namespace std;
#define ll unsigned long long
int t,n;ll precomp[100005];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  precomp[0]=0;
  for(ll i=1;i<=100000;i++){precomp[i]=i*i+precomp[i-1];}
  cin>>t;
  while(t--){
    cin>>n;
    cout<<precomp[n]<<"\n";
  }
}