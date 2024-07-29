#include"iostream"
#include"string"
using namespace std;
#define ll long long
int main(){
  string s;cin>>s;
  for(ll i=0;i<s.size();i++){
    while(s[i]==s[i+1]){s.erase(i,1);}
  }
  cout<<s;
}