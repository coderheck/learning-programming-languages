#include"iostream"
#include"string"
using namespace std;
string s;int c=0,t=0,i=0;
int main(){
  cin>>s;
  for(;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      t=t*10+s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){i++;t=t*10+s[i]-'0';}
      t=0;c++;
    }
  }
  if(t!=0){c++;}
  cout<<c;
}