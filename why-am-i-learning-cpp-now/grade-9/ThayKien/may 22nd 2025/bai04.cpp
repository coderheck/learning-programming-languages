#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ll long long
string s;map<char,ll>cnt;
int main(){
  cin>>s;
  for(ll i=0;i<s.size();i++){cnt[s[i]]++;}
  cout<<cnt.size()<<"\n";
  for(map<char,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
    cout<<i->first<<" "<<i->second<<"\n";
  }
}
