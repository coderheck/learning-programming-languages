#include"iostream"
#include"string"
using namespace std;
string s;char c;
int main(){
  getline(cin,s);
  cin>>c;
  for(unsigned long long i=0;i<s.size();i++){
    if(s[i]==c){cout<<i+1;return 0;}
  }
  cout<<0;
}