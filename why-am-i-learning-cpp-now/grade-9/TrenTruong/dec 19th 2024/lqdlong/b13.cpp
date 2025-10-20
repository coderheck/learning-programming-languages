#include"iostream"
#include"string"
#include"sstream"
#include"vector"
using namespace std;
#define elif else if
string s;
vector<string>mycock;
void parse(){
  stringstream ss(s);string tmp;
  while(ss>>tmp){
    mycock.push_back(tmp);
  }
  int c=mycock.size();
  if(c==1){
    cout<<"\n"<<mycock[0];
  }elif(c==2){
    cout<<mycock[0]<<"\n"<<mycock[1];
  }else{
    for(int i=0;i<mycock.size()-1;i++){
      cout<<mycock[i];
      if(i!=mycock.size()-1){cout<<' ';}
    }
    cout<<"\n"<<mycock[mycock.size()-1];
  }
}
int main(){
  getline(cin,s);
  parse();
}