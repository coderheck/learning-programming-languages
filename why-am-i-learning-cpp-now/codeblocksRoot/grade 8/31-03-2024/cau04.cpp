#include"iostream"
#include"string"
#define kbc main
#define ll long long
using namespace std;
bool xdx(string s){
  ll n=s.length();bool dx=true;
  for(ll i=0;i<n;i++){if(s[i]!=s[n-i-1]){dx=false;}}
  return dx;
}
int kbc(){
  if(fopen("cau04.inp","r")){
    freopen("cau04.inp","r",stdin);
    freopen("cau04.out","w",stdout);
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
