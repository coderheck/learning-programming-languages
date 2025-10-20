#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll n,a;
vector<ll>divsum(1000005,0);
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  for(ll i=1;i<=1000000;i++){
    for(ll j=i;j<=1000000;j+=i){divsum[j]+=i;}
  }
  cin>>n;
  while(n--){
    cin>>a;
    cout<<(2*a<=divsum[a])<<"\n";
  }
}
