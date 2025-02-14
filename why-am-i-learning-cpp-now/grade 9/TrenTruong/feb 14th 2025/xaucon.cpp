#include"iostream"
#include"string"
using namespace std;
string s;int res=0,t=0;
int main(){
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      t++;
      while(s[i+1]=='0'){i++;t++;}
      if(t>res){res=t;}
      t=0;
    }
  }
  cout<<res;
}