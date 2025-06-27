#include"iostream"
#include"string"
using namespace std;
int main(){
  string s;getline(cin,s);int lo=0,up=0;
  for(int i=0;i<s.size();i++){
    if(s[i]>='a'&&s[i]<='z'){lo++;}else{up++;}
  }
  cout<<lo<<" "<<up;
}
