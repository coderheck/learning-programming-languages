#include"iostream"
#include"string"
using namespace std;
string s;
char lowercs(char c){
  if(c>='A'&&c<='Z'){
    return c+32;
  }else{
    return c;
  }
}
void parse(){
  for(char &d:s){d=lowercs(d);}
  cout<<s;
}
int main(){
  getline(cin,s);
  parse();
}