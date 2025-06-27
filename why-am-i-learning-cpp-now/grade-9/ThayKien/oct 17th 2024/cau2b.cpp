#include"iostream"
#include"string"
#include"sstream"
#include"map"
using namespace std;
string s,tmp;
map<string,int>cnt;
int r=-1000;
void suckmyBrain(){
  getline(cin,s);
  for(char &i:s){i=tolower(i);}
  stringstream ss(s);
  while(ss>>tmp){cnt[tmp]++;}
  for(auto i:cnt){if(i.second>r){r=i.second;}}
  cout<<r;
}
int main(){
  suckmyBrain();
}