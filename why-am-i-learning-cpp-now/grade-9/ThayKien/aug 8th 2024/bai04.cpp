#include"iostream"
#include"map"
#include"string"
using namespace std;
int main(){
  map<char,long long>cnt;string s;cin>>s;
  for(char c:s){cnt[c]++;}
  cout<<cnt.size()<<"\n";
  for(auto c:cnt){
    cout<<c.first<<" "<<c.second<<"\n";
  }
}
