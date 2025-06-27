#include"iostream"
#include"string"
#include"sstream"
using namespace std;
#define ll long long
bool pl(string s){
  unsigned ll n=s.size();
  for(unsigned ll i=0;i<n/2;i++){
    if(s[i]!=s[n-i-1]){return false;}
  }
  return true;
}
string s,tmp;ll res=0;
void parse(){
  stringstream ss(s);
  while(ss>>tmp){
    res+=pl(tmp);
  }
  cout<<res;
}
int main(){
  getline(cin,s);
  parse();
}