#include<iostream>
using namespace std;
#define ll long long
ll n,a,res=-1,maxgot=-1,cnt[100005];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){cin>>a;cnt[a]++;if(maxgot<a){maxgot=a;}}
  for(ll i=maxgot;i>=1;i--){if(cnt[i]==1){res=i;}}
  cout<<res;
}