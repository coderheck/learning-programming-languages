#include"iostream"
#include"string"
#include"vector"
#include"sstream"
using namespace std;
#define ll long long
int ExtractIntegersFromString(string str){
  stringstream ss; ss<<str;
  string tmp; int found, ret=0;
  while(!ss.eof()){
    ss>>tmp;
    if(std::stringstream(tmp)>>found){ret*=10;ret+=found;}
    tmp="";
  }
  return ret;
}
vector<char>parseIntString(string s){
  vector<char>chars;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='9'){char push=ExtractIntegersFromString(s.substr(i,2));chars.push_back(push);i+=1;}else{chars.push_back(ExtractIntegersFromString(s.substr(i,3)));i+=2;}
  }
  return chars;
}
int main(){
  string s;cin>>s;
  vector<char>res=parseIntString(s);
  for(ll i=0;i<res.size();i++){cout<<res[i];}
}
