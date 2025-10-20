#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string o,a;int res=0,wc=0;
void parseArg(){
  stringstream ss(o);string t;
  while(ss>>t){
    if(a==t){res++;}
    wc++;
  }
  cout<<wc<<" "<<res;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  getline(cin,o);
  getline(cin,a);
  parseArg();
}