#include"iostream"
#include"string"
#include"sstream"
#include"vector"
using namespace std;
string s;
vector<string>cock;
void parse(){
  stringstream ss(s);string tmp;
  while(ss>>tmp){
    cock.push_back(tmp);
  }
  for(int i=cock.size()-1;i>=0;i--){
    cout<<cock[i];
    if(i!=0){cout<<' ';}
  }
}
int main(){
  getline(cin,s);
  parse();
}