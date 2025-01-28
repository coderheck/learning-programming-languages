#include"iostream"
#include"string"
using namespace std;
string s,deco;
int main(){
  freopen("temp.inp","r",stdin);
  cin>>s;
  for(int i=0;i<s.size();i++){if(s[i]=='#'){s.erase(i,1);}}
  for(int i=0;i<s.size();i++){
    if(s[i]=='&'){
      int c=0;i++;
      while(s[i]!=';'){c=c*10+s[i++]-'0';}
      deco.push_back((char)c);
    }
  }
  cout<<deco;
}