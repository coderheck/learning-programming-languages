#include"bits/stdc++.h"
#define ll unsigned long long
using namespace std;
bool xdx(string s){
  bool dx=true;
  for(ll i=0;i<s.size();i++){if(s[i]!=s[s.size()-i-1]){dx=false;}}
  return dx;
}
int main(){
  if(fopen("palindstr.inp","r")){
    freopen("palindstr.inp","r",stdin);
    freopen("palindstr.out","w",stdout);
  }
  ll n,maxLen=0;;string s;cin>>n>>s;
  for(ll i=0;i<n;i++){
    for(ll j=n-1;j>=i;j--){
      string tmp=s.substr(i,j-i);
      if(xdx(tmp)==true){if(tmp.length()>maxLen){maxLen=tmp.length();break;}}
    }
  }
  cout<<maxLen;
}
