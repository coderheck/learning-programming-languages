#include<iostream>
#include<ios>
using namespace std;
#define ll long long
ll t,n,preproc[1000005];
int main(){
  cin.tie(0)->sync_with_stdio(0);
  preproc[0]=0;
  for(ll i=1;i<=1000000;i++){preproc[i]=i*(i+2)+preproc[i-1];}
  cin>>t;
  while(t--){
    cin>>n;
    cout<<preproc[n]<<"\n";
  }
}