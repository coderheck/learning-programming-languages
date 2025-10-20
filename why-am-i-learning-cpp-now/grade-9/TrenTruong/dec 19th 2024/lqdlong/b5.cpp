#include"iostream"
#include"string"
using namespace std;
string s;
char uppercs(char c){
  if(c>='a'&&c<='z'){
    return c-32;
  }else{
    return c;
  }
}
void parse(){
  for(char &d:s){d=uppercs(d);}
  cout<<s;
}
int main(){
  getline(cin,s);
  parse();
}