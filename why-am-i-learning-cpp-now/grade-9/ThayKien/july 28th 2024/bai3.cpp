#include"iostream"
#include"string"
#define ll long long
using namespace std;
int main(){
  string s,res;cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='A'&&s[i]<='Z'){
      char c=s[i];int num=s[i+1]-'0';
      if(c+num>'Z'){c='A'+((c+num)-'Z')-1;}else{c+=num;}
      res.push_back(c);
    }
  }
  cout<<res;
}
