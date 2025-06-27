#include"iostream"
#include"string"
using namespace std;
string s;int cum=0,shit=0;
int main(){
  getline(cin,s);
  cin>>cum>>shit;
  s.erase(cum,shit);
  cout<<s;
}