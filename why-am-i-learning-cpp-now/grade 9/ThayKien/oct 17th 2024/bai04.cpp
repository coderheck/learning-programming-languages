#include"iostream"
#include"string"
#include"map"
#define ll long long
using namespace std;
string s;
map<char,ll>cnt;
void ParseString(){
  for(auto i:s){cnt[i]++;}
  cout<<cnt.size()<<"\n";
  for(auto i:cnt){
    cout<<i.first<<" "<<i.second<<"\n";
  }
}
int main(){
  cin>>s;
  ParseString();
}