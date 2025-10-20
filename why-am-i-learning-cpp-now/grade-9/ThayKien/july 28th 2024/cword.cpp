#include"iostream"
#include"string"
#include"sstream"
using namespace std;
#define ll long long
bool isPalindrome(string s){
  for(ll i=0;i<s.size();i++){
    if(s[i]!=s[s.size()-i-1]){return false;}
  }
  return true;
}
void ParseString(string s){
  stringstream ss(s);string tmp;ll c=0;
  while(ss>>tmp){
    if(isPalindrome(tmp)){c++;}
  }
  cout<<c;
}
int main(){
  string s;getline(cin,s);ParseString(s);
}