#include"iostream"
#include"string"
using namespace std;
int main(){
  freopen("5a.inp","r",stdin);
  freopen("5a.out","w",stdout);
  string s;getline(cin,s);
  while(s[0]==' '){s.erase(s.begin());}
  while(s[s.length()-1]==' '){s.erase(s.end()-1);}
  for(int i=0;i<s.length();i++){if(s[i]==s[i+1] && s[i+1]==' '){s.erase(s.begin()+i);i--;}}
  for(int i=0;i<s.length();i++){if(s[i]>='A'&&s[i]<='Z'){s[i]+=32;}}
  s[0]=toupper(s[0]);
  for(int i=0;i<s.length();i++){if(s[i]!=s[i+1] && s[i]==' '){s[i+1]=toupper(s[i+1]);}}
  std::cout<<s;
}