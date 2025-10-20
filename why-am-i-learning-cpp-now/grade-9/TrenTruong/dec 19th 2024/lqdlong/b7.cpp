#include"iostream"
#include"string"
using namespace std;
#define ll long long
string s;
void parse(){
  unsigned ll n=s.size();
  int lol;
  if(s[0]>='a'&&s[0]<='z'){
    lol=0;
  }else{
    lol=1;
  }
  for(unsigned ll i=1;i<n;i++){
    if(lol==1){
      lol++;lol%=2;
      s[i]=tolower(s[i]);
    }else{
      lol++;lol%=2;
      s[i]=toupper(s[i]);
    }
  }
  cout<<s;
}
int main(){
  getline(cin,s);
  parse();
}