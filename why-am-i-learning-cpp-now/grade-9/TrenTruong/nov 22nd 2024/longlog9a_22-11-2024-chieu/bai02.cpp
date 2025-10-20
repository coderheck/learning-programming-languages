#include"iostream"
#include"string"
using namespace std;
long long t=0;string s;
void parsepass(){
  for(char c:s){
    if(c>='0'&&c<='9'){t+=c-'0';}
  }
  printf("%s%lld",!(t&1)?"Hard":"Easy",t);
}
int main(){
  cin>>s;
  parsepass();
}