#include"iostream"
#include"string"
#include"sstream"
#include"map"
using namespace std;
#define ll long long
bool isPalindrome(string s,ll n){
  for(ll i=0;i<n;i++){
    if(s[i]!=s[n-i-1]){return false;}
  }
  return true;
}
string s;map<string,ll>cnt;ll plC=0,singleC=0;
void ParseString(){
  stringstream ss(s);string tmp;
  while(ss>>tmp){
    cnt[tmp]++;
    if(isPalindrome(tmp,tmp.size())){plC++;}
  }
  for(auto c:cnt){if(c.second==1){singleC++;}}
  cout<<singleC<<"\n"<<plC;
}
int main(){
  getline(cin,s);
  ParseString();
}
