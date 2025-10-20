#include"iostream"
#include"string"
#include"sstream"
using namespace std;
#define ll long long
bool isGoodWord(string s){
  return(s[0]=='u'||s[0]=='e'||s[0]=='o'||s[0]=='a'||s[0]=='i')?true:false;
}
void ParseString(string s){
  stringstream ss(s);string tmp;ll c=0;
  while(ss>>tmp){c+=isGoodWord(tmp);}
  cout<<c;
}
int main(){
  ll c=0;string s;
  getline(cin,s);getline(cin,s);
  ParseString(s);
}