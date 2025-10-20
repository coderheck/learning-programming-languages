#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
int n,res=0;ll a[1005];unordered_map<ll,int>cnt;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a[i];cnt[a[i]*a[i]]++;}
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      if(cnt.count(a[i]*a[i]+a[j]*a[j])){res+=cnt[a[i]*a[i]+a[j]*a[j]];}
    }
  }
  cout<<res;
}