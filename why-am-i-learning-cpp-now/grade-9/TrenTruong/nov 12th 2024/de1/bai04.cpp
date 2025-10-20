#include"iostream"
#include"string"
#include"sstream"
#include"map"
using namespace std;
#define ll long long
string s,tmp;
map<string,ll>cnt;
ll plC=0,onceC=0;
bool pl(string str,ll n){
  for(ll i=0;i<n/2;i++){
    if(str[i]!=str[n-i-1]){return false;}
  }
  return true;
}
void parseArg(){
  stringstream ss(s);
  while(ss>>tmp){
    cnt[tmp]++;
    if(pl(tmp,tmp.size())){plC++;}
  }
  for(auto i:cnt){
    if(i.second==1){onceC++;}
  }
  cout<<onceC<<"\n"<<plC;
}
int main(){
  if(fopen("bai04.inp","r")){
    freopen("bai04.inp","r",stdin);
    freopen("bai04.out","w",stdout);
  }
  getline(cin,s);
  parseArg();
}
// if(s[i]!=s[n-i-1]){return false;}