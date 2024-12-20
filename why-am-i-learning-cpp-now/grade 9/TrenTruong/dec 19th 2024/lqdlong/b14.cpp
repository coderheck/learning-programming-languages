#include"iostream"
#include"string"
using namespace std;
string s,q;
int main(){
  getline(cin,s);
  getline(cin,q);
  int from=s.find(q);
  if(from!=string::npos){
    for(int i=from;i<s.size();i++){cout<<s[i];}
  }else{
    cout<<0;
  }
}