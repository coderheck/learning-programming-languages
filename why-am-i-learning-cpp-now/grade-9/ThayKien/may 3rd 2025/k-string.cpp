#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
ll t,k;string s;unordered_map<char,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>t;
  while(t--){
    cnt.clear();
    cin>>k>>s;
    for(ll i=0;i<s.size();i++){cnt[s[i]]++;}
    if(cnt.size()==k){cout<<"Yes\n";}else{cout<<"No\n";}
  }
}
