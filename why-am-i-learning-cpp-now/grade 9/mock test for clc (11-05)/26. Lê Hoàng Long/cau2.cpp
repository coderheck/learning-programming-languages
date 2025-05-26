#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ll long long
string s;ll res=0,tmp=0;map<char,ll>cnt;
int main(){
  cnt[' ']=0;
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(cnt[s[i]]){
      if(tmp>res){res=tmp;}
      cnt.clear();tmp=0;
    }
    cnt[s[i]]++;tmp++;
  }
  if(tmp>res){res=tmp;}
  cout<<res;
}
