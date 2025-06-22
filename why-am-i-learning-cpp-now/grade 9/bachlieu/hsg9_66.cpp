#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s,res;
ll div2(string &n){
  ll r=0,c=0;string tmp;
  for(ll i=0;i<n.size();i++){
    c=r*10+(n[i]-'0');
    tmp.push_back((c/2)+'0');
    r=c%2;
  }
  while(tmp.size()>0&&tmp[0]=='0'){tmp.erase(0,1);}
  if(!tmp.size()){n="0";}else{n=tmp;}
  return r;
}
int main(){
  cin>>s;
  if(s=="0"){cout<<s;return 0;}
  while(s!="0"){
    ll r=div2(s);
    res.push_back(r+'0');
  }
  for(ll i=res.size()-1;i>=0;i--){cout<<res[i];}
}
