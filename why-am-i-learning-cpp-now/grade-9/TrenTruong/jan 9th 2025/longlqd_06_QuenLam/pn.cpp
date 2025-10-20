#include"iostream"
using namespace std;
string s;
void proc(){
  int n=s.size();
  cout<<(s[n-1]-'0')*(s[n-2]-'0');
}
int main(){
  cin>>s;
  proc();
}