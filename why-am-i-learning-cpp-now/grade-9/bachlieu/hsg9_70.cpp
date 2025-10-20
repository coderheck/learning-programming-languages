#include<iostream>
#include<string>
using namespace std;
string s,res;int c=0;
int main(){
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      c=c*10+s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){c=c*10+s[i+1]-'0';i++;}
      res.push_back((char)c);
      c=0;
    }
  }
  cout<<res;
}
