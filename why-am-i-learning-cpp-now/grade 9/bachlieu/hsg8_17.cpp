#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
ll n,x,a,res=0;unordered_map<ll,ll>cnt;
int main(){
  cnt.reserve(10000000);
  cin>>n>>x;
  while(n--){
    cin>>a;
    res+=cnt[x-a];
    cnt[a]++;
  }
  if(!res){cout<<-1;}else{cout<<res;}
}
