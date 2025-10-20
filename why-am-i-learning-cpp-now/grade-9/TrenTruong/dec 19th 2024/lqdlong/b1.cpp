#include"iostream"
#include"string"
using namespace std;
string s;long long res=0;
void parseArg(){
  for(char c:s){
    if(c==' '){res++;}
  }
  cout<<res;
}
int main(){
  getline(cin,s);
  parseArg();
}