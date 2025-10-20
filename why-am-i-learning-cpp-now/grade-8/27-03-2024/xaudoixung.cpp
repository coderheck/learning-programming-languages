#include"iostream"
#include"string"
using namespace std;
bool xaudoixung(string s){
  bool dx=true;
  for(int i=0;i<s.length()/2;i++){if(s[i]!=s[s.length()-i-1]){dx=false;break;}}
  return dx;
}
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    string s;cin>>s;
    if(xaudoixung(s)==true){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}