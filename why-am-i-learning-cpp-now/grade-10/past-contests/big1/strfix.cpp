#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<sstream>
using namespace std;
#define ll long long
#define umap unordered_map
string s,res,p;ll k,q,i=0;umap<char,ll>cnt;char c;bool f=true;
void parseArg(){
  res="",p="",f=true,i=0;
  while(f){
    if(cnt[s[i]]){
      f=false;
      reverse(p.begin(),p.end());
      res+=p;p="";
    }else{
      p+=s[i];
    }
    i++;
  }
  for(;i<s.size();i++){
    if(!cnt[s[i]]){
      res+=s[i];
    }else{
      while(!cnt[s[i+1]]&&i<s.size()){p+=s[i+1];i++;}
      cout<<p<<"-";
      reverse(p.begin(),p.end());
      res+=p;
      p="";
    }
  }
  cout<<res<<"\n";
}
void fuckyou(){
  for(ll i=0;i<s.size();i++){if(cnt[s[i]]){s[i]=' ';}}
  stringstream ss(s);string tm;
  while(ss>>tm){
    reverse(tm.begin(),tm.end());
    cout<<tm;
  }
  cout<<"\n";
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>k;
  for(ll i=0;i<k;i++){cin>>c;cnt[c]++;}
  cin>>q;
  while(q--){
    cin>>s;
    fuckyou();
  }
}
