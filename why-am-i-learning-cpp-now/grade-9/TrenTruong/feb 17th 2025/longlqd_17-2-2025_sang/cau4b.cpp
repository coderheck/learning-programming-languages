#include"iostream"
#include"string"
using namespace std;
string s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(!(s[i]>='0'&&s[i]<='9')){
      char selChar=s[i];int c=0;
      while(s[i+1]>='0'&&s[i+1]<='9'){
        c=c*10+s[i+1]-'0';i++;
      }
      if(!c){cout<<selChar;}else{while(c){cout<<selChar;c--;}}
    }
  }
}