#include"iostream"
#include"string"
#include"map"
using namespace std;
string s;map<char,int>cnt;char f;
int main(){
  getline(cin,s);
  cin>>f;
  for(char c:s){cnt[c]++;}
  cout<<cnt[f];
}