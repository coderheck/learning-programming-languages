#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string s,tmp;
void parse(){
  stringstream ss(s);
  while(ss>>tmp){
    tmp[0]=toupper(tmp[0]);
    for(long long i=1;i<tmp.size();i++){tmp[i]=tolower(tmp[i]);}
    cout<<tmp<<" ";
  }
}
int main(){
  getline(cin,s);
  parse();
}