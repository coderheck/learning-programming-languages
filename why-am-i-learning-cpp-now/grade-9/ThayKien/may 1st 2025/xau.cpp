#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s,filtered,check,res;ll k;
int main(){
  getline(cin,s);
  cin>>k;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){filtered.push_back(s[i]);}
  }
  res=check=filtered.substr(0,k);
  for(ll i=k;i<filtered.size();i++){
    check.erase(0,1);check+=filtered[i];
    if(check>res){res=check;}
  }
  cout<<filtered<<"\n"<<res;
}