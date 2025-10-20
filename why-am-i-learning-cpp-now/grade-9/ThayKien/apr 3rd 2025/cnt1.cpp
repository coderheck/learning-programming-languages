#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
ll a,n,k,res=0;unordered_map<ll,ll>cnt;
int main(){
  if(fopen("cnt1.inp","r")){
    freopen("cnt1.inp","r",stdin);
    freopen("cnt1.out","w",stdout);
  }
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  while(n--){cin>>a;cnt[a]++;}
  for(unordered_map<ll,ll>::iterator it=cnt.begin();it!=cnt.end();it++){
    if(it->second>k){
      if(it->second%k==0){res++;}
    }else if(it->second==k){res++;}
  }
  cout<<res;
}