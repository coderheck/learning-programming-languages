#include"iostream"
#include"string"
using namespace std;
int main(){
  freopen("1a.inp","r",stdin);
  freopen("1a.out","w",stdout);
  string s;int wc=0;getline(cin,s);
  while(s[0]==' '){s.erase(s.begin());}
  while(s[s.size()-1]==' '){s.erase(s.end()-1);}
  for(int i=0;i<s.size();i++){
    if(s[i]!=' '){
      wc++;
      while( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){s[i]=toupper(s[i]);i++;}
    }
  }
  cout<<s<<"\n";
  for(int i=0;i<s.size();i++){s[i]=tolower(s[i]);}
  cout<<s<<"\n";
  cout<<wc;
}