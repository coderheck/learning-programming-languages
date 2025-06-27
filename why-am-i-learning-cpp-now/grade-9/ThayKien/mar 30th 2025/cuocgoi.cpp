#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
bool IsLadderNumber(ll a){
  if(a<10){return false;}
  ll r=a%10,l=(a/10)%10;
  while(a!=0&&a/10!=0){
    if(r<=l){return false;}
    a/=10;
    r=a%10,l=(a/10)%10;
  }
  return true;
}
ll n,k,a;bool f=false;unordered_map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  while(n--){cin>>a;cnt[a]++;}
  while(k--){
    cin>>a;
    if(IsLadderNumber(cnt[a])){f=true;cout<<a<<" "<<cnt[a]<<"\n";}
  }
  if(!f){cout<<"0 0";}
}