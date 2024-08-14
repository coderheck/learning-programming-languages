#include"iostream"
#include"string"
#include"sstream"
using namespace std;
#define ll long long
string s;ll aC=0;
void parsestring(){
  stringstream ss(s);string st;
  while(ss>>st){
    if(st[0]=='a'||st[0]=='A'){aC++;}
  }
  cout<<aC;
}
int main(){
  cin>>s;parsestring();
}
