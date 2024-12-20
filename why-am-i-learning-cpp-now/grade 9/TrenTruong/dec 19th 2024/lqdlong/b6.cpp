#include"iostream"
#include"string"
using namespace std;
string s;
void parse(){
  unsigned long long n=s.size();
  s=' '+s;
  for(unsigned long long i=0;i<n;i++){
    if(s[i]==' '&&s[i+1]>='a'&&s[i+1]<='z'){s[i+1]-=32;}
  }
  s.erase(0,1);
  cout<<s;
}
int main(){
  getline(cin,s);
  parse();
}