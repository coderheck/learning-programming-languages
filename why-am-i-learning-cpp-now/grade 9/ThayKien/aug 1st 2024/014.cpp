#include"iostream"
#include"vector"
using namespace std;
#define ll long long
ll n,cnt[100000];
int main(){
  cin>>n;
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    cnt[a]++;
  }
  bool found=false;
  for(ll i=1;i<=n;i++){
    if(cnt[i]==1){cout<<i;found=true;break;}
  }
  if(!found){cout<<-1;}
}