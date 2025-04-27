#include<iostream>
#include<map>
using namespace std;
#define ll long long
ll n,a,res=0;map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;
    res+=cnt[0-a];
    cnt[a]++;
  }
  cout<<res;
}
