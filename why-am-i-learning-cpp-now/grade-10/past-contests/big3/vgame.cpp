#include<iostream>
#include<vector>
using namespace std;
#define ll long long
const ll maxn=1000000;
const ll sub3=100000;
ll q,a;
vector<ll>d(maxn+5,0);
int main(){
  for(ll i=1;i<=maxn;i++){
    for(ll j=i;j<=maxn;j+=i){d[j]+=i;}
  }
  cin.tie(0)->sync_with_stdio(0);
  cin>>q;
  if(q<=sub3){
    while(q--){
      cin>>a;
      cout<<d[a]<<" ";
    }
  }else{
    return 0;
  }
}
