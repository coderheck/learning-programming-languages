#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string s,subject;
void parse(){
  stringstream ss(s);
  ss>>subject;
  if(subject=="I"){cout<<"am";return;}
  if(subject=="We"||subject=="They"||subject=="You"){cout<<"are";return;}
  cout<<"is";
}
int main(){
  getline(cin,s);
  parse();
}