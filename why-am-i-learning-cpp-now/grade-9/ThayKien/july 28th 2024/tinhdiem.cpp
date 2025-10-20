#include"iostream"
#include"string"
#define ll long long
using namespace std;
int main(){
  string s;cin>>s;ll c=0;
  for(ll i=0;i<s.size();i++){
    if(tolower(s[i])=='y'){
      ll add=1,co=1;
      while(tolower(s[i+1])=='y'){co++;add+=co;i++;}
      c+=add;
    }
  }
  cout<<c;
}
