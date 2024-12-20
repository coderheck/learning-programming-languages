#include"iostream"
#include"string"
using namespace std;
string s;
void pl(){
  int n=s.size();
  for(int i=0;i<=n/2;i++){
    if(s[i]!=s[n-i-1]){cout<<0;return;}
  }
  cout<<1;
}
int main(){
  getline(cin,s);
  pl();
}