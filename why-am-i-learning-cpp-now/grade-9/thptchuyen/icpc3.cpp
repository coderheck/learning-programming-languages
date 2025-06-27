#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll n,k;string s;ll cnt[257];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  for(ll i=0;i<256;i++){cnt[i]=0;}
  cin>>n>>k;
  cin.ignore();
  while(n--){
    getline(cin,s);
    for(ll i=0;i<s.size();i++){cnt[s[i]]++;}
  }
  for(ll i='A';i<='A'+k-1;i++){
    cout<<cnt[i]<<" ";
    while(cnt[i]--){cout<<"*";}
    cout<<"\n";
  }
}
