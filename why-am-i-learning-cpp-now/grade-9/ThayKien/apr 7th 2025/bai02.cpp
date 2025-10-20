#include<iostream>
using namespace std;
#define ll long long
ll n,m,a,res=0,cnt[1000005];
int main(){
  for(ll i=0;i<=1000000;i++){cnt[i]=0;}
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a;cnt[a]++;}
  for(ll i=0;i<m;i++){
    cin>>a;
    if(cnt[a]>0){cnt[a]--;}else{res++;}
  }
  cout<<res;
}