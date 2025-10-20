#include<iostream>
using namespace std;
#define ll long long
ll n,k,d,a[100005],b[100005];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=1;i<=n;i++){cin>>a[i];}
  for(ll i=1;i<=n;i++){cin>>b[i];}
  while(k--){
    cin>>d;
    if(a[1]==0||(a[d]==0&&b[d]==0)){cout<<"0 ";continue;}
    if(a[d]==1){cout<<"1 ";continue;}
    bool c=false;
    for(ll i=d+1;i<=n;i++){
      if(a[i]&&b[i]&&b[d]){c=true;break;}
    }
    if(c){cout<<"1 ";}else{cout<<"0 ";}
  }
}