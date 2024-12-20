#include"iostream"
#include"string"
using namespace std;
#define ll long long
string s;
void parse(){
  while(s[0]==' '){s.erase(0,1);}
  unsigned ll n=s.size();
  for(unsigned ll i=0;i<n;i++){
    if(s[i]!=' '&&s[i+1]==' '&&s[i+2]==' '){s.erase(i+1,1);i--;}
  }
  cout<<s;
}
int main(){
  getline(cin,s);
  parse();
}