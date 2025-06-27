#include<iostream>
#include<string>
#include<sstream>
using namespace std;
#define ll long long
string s,res,tmp;
void parseArg(){
  stringstream ss(s);
  while(ss>>tmp){
    for(ll i=0;i<tmp.size();i++){tmp[i]=(char)tolower(tmp[i]);}
    tmp[0]=(char)toupper(tmp[0]);
    res+=tmp+" ";
  }
  cout<<res;
}
int main(){
  getline(cin,s);
  parseArg();
}
