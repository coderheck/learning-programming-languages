#include"iostream"
#include"string"
using namespace std;
string s;int t=0;
void parse(){
  for(char c:s){
    if(c>='0'&&c<='9'){t+=c-'0';}
  }
  (t&1)?printf("Easy%i",t):printf("Hard%i",t);
}
int main(){
  cin>>s;
  parse();
}