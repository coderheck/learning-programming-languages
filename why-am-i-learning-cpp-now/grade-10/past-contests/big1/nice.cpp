#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string s,tmp;
void parseArgs(){
  stringstream ss(s);
  while(ss>>tmp){
    if(tmp=="I"){
      cout<<"am";return;
    }else if(tmp=="You"||tmp=="We"||tmp=="They"){
      cout<<"are";return;
    }else{
      cout<<"is";return;
    }
  }
}
int main(){
  getline(cin,s);
  parseArgs();
}
