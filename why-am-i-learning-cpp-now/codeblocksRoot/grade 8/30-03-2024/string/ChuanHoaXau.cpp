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
  string str;getline(cin,str);
  while(str[0]==' '){str.erase(0,1);}
  while(str[str.length()-1]==' '){str.erase(str.length()-1,1);}
  for(ull i=0;i<str.length();i++){if(str[i]==str[i+1]&&str[i]==' '){str.erase(i,1);i--;}}
  for(ull i=0;i<str.length();i++){if(str[i]>='A'&&str[i]<='Z'){str[i]+=32;}}
  str[0]=toupper(str[0]);
  for(ull i=0;i<str.length();i++){if(str[i]!=str[i+1]&&str[i]==' '){str[i+1]=toupper(str[i+1]);}}
  cout<<str;
}
