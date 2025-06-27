#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string s;int n;
bool isvowel(char c){
  char c1=tolower(c);
  return(c1=='a'||c1=='e'||c1=='i'||c1=='o'||c1=='u');
}
void parse(){
  stringstream ss(s);
  string tmp;int res=0;
  while(ss>>tmp){
    if(isvowel(tmp[0])){res++;}
  }
  cout<<res;
}
int main(){
  cin>>n;cin.ignore();
  getline(cin,s);
  parse();
}