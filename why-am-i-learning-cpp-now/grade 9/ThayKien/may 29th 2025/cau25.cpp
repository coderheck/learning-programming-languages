#include<iostream>
#include<string>
#include<sstream>
using namespace std;
#define ll long long
string s;ll r=0;
void parseArg(){
  stringstream ss(s);string tmp;
  while(ss>>tmp){
    r+=(tmp[0]=='a'||tmp[0]=='A');
  }
  cout<<r;
}
int main(){
  if(fopen("cau25.inp","r")){
    freopen("cau25.inp","r",stdin);
    freopen("cau25.out","w",stdout);
  }
  getline(cin,s);
  parseArg();
}
