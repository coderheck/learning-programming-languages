#include"iostream"
#include"string"
#include"sstream"
using namespace std;
#define ll long long
string s,tmp;ll r=0;
bool check(string tmp){
  ll n=tmp.size();
  if(n<1){return false;}
  for(int i=0;i<n/2;i++){
    if(tmp[i]!=tmp[n-i-1]){return false;}
  }
  return true;
}
void comp(){
  stringstream ss(s);
  while(ss>>tmp){
    if(check(tmp)){r++;}
  }
  cout<<r;
}
int main(){
  if(fopen("cword.inp","r")){
    freopen("cword.inp","r",stdin);
    freopen("cword.out","w",stdout);
  }
  getline(cin,s);
  comp();
}