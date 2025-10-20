#include"iostream"
#include"string"
#include"algorithm"
using namespace std;
#define ll long long
void ParseString(string s,ll k){
  ll c=0;
  for(ll i=0;i<s.size();i++){
    ll lc=1;
    while(s[i+1]==s[i]){
      lc++;i++;
    }
    if(lc>=k){c++;}
  }
  cout<<c;
}
int main(){
  string s;ll k;
  cin>>k;cin.ignore();cin>>s;
  for(ll i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
  }
  sort(s.begin(),s.end());
  ParseString(s,k);
}