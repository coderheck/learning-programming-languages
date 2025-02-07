#include"iostream"
#include"string"
using namespace std;
string s="Alyx";int r=0;
int main(){
  for(char c:s){r+=(int)c;}
  cout<<r<<" "<<(r%3==0);
}
