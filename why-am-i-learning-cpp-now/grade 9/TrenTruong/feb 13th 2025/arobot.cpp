#include <iostream>
#include"unordered_map"
using namespace std;
#define ll long long
int n;ll a[1000005];
unordered_map<ll,ll>cnt;
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a[i];cnt[a[i]]=i;}
  cnt[0]=INT_MIN;
  for(int i=1;i<=n;i++){
    if(cnt[i]>cnt[i-1]){cout<<i<<" ";}else{cout<<"\n"<<i<<" ";}
  }
}