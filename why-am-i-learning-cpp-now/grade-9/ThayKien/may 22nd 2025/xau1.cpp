#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
string s;umap<char,ll>cnt;
int main(){
  cin>>s;
  for(ll i=0;i<s.size();i++){cnt[s[i]]++;}
  cout<<cnt.size();
}
