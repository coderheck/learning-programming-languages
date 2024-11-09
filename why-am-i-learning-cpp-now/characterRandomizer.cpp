#include"iostream"
#include"string"
#include"cstdlib"
#include"ctime"
using namespace std;
string s;
void parse(){
  getline(cin,s);
  for(int i=0;i<s.size();i++){
    srand(time(0)*i*rand());
    int ran=rand()%256;
    if(s[i]=='\n'||s[i]==' '){cout<<s[i];}else{cout<<(char)ran;}
  }
}
int main(){
  freopen("temp.inp","r",stdin);
  freopen("temp.out","w",stdout);
  parse();
}
