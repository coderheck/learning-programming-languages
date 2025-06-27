#include"iostream"
#include"string"
using namespace std;
string s;
int main(){
  getline(cin,s);
  while(s[0]==' '){s.erase(0,1);}
  while(s[s.size()-1]==' '){s.erase(s.size()-1,1);}
  for(int i=0;i<s.size();i++){
    if(s[i]==' '&&s[i]==s[i+1]){
      s.erase(i,1);i--;
    }
  }
  cout<<s;
}
/*
Trường     THCS    Bạch    Liêu
*/