#include<iostream>
#include<map>
using namespace std;
#define ll long long
ll n,k,a,res=0;map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  while(n--){cin>>a;cnt[a%k]++;}
  res+=(cnt[0]>0);
  for(ll r=1;r<=k/2;r++){
    if(r==k-r){
      res++;
    }else{
      res+=(cnt[r]>cnt[k-r])?cnt[r]:cnt[k-r];
    }
  }
  cout<<res;
}