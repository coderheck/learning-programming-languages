#include"iostream"
#include"string"
using namespace std;
string s;
int main(){
  getline(cin,s);
  for(char c:s){
    if(c>='0'&&c<='9'){cout<<c;}
  }
}