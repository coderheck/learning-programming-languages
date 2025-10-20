#include"iostream"
#include"string"
#include"algorithm"
#define ull unsigned long long
#define kbc main
using namespace std;
int kbc(){
  if(fopen("ChuanHoaXau.inp","r")){
    freopen("ChuanHoaXau.inp","r",stdin);
    freopen("ChuanHoaXau.out","w",stdout);
  }
  string s;getline(cin,s);
  while(s[0]==' '){s.erase(0,1);}
  while(s[s.size()-1]==' '){s.erase(s.size()-1,1);}
  for(ull i=0;i<s.size();i++){
    if(s[i]==s[i+1]&&s[i]==' '){s.erase(i,1);i--;}
  }
  for(ull i=0;i<s.size();i++){
    if(s[i]>='A'&&s[i]<='Z'){s[i]+=32;}
  }
  s[0]=toupper(s[0]);
  for(ull i=0;i<s.size();i++){
    if(s[i]!=s[i+1]&&s[i]==' '){s[i+1]=toupper(s[i+1]);}
  }
  cout<<s;
}
