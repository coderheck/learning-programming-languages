#include"iostream"
#include"string"
using namespace std;
#define ll long long
int main(){
  string s;long long t=0;cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      ll curNum=s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){
        curNum*=10;curNum+=s[i+1]-'0';
        i++;
      }
      t+=curNum;
    }
  }
  cout<<t;
}