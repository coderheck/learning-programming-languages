#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string s,res;
void ParseString(){
  stringstream ss(s);string tmp;
  while(ss>>tmp){
    for(char c:tmp){
      if(c=='.'){res+="Boop ";}
      if(c=='-'){res+="Beep ";}
      if(c=='/'){res+="  ";}
    }
    res+=" ";
  }
}
int main(){
  getline(cin,s);
  ParseString();
  cout<<res;
}
