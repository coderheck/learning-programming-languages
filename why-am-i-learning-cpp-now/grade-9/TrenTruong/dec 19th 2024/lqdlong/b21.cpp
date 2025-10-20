#include"iostream"
#include"string"
using namespace std;
string s,strInsert;int vt;
int main(){
  getline(cin,s);
  getline(cin,strInsert);
  cin>>vt;
  s.insert(vt,strInsert);
  cout<<s;
}