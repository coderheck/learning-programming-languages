#include"iostream"
#include"string"
#define kbcl return 0
#define ll long long
using namespace std;
int ctd(char c){
  return c-'0';
}
int main(){
  string s;getline(cin,s);ll t=0;
  for(ll i=0;i<s.size();i++){t+=ctd(s[i]);}
  cout<<s.length()<<" "<<t;
  kbcl;
}
