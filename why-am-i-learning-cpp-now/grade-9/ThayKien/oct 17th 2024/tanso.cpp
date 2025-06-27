#include"iostream"
#include"string"
#include"map"
using namespace std;
int k,r=0;string s;map<char,int>cnt;
void proc(){
  for(char i:s){cnt[toupper(i)]++;}
  for(auto i:cnt){if(i.second>=k){r++;}}
  cout<<r;
}
int main(){
  cin>>k>>s;
  proc();
}