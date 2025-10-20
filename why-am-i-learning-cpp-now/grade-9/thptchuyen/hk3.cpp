#include"iostream"
#include"string"
using namespace std;
string s;char res=CHAR_MIN;
int main(){
  cin>>s;
  for(char c:s){if(c>res){res=c;}}
  cout<<res;
}