#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
ll n,m,a;unordered_map<ll, ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  cnt.reserve(m+1);
  while(n--){
    cin>>a;
    if(!cnt[a]){
      cout<<1<<" ";
    }else{
      cout<<cnt[a]+1<<" ";
    }
    cnt[a]++;
  }
}
