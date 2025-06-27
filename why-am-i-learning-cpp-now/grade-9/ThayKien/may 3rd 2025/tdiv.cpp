#include<iostream>
#include<string>
using namespace std;
#define ll long long
string clearLeadingZeros(string &s){
  ll i=0;
  while(s[0]=='0'&&i<s.size()){i++;}
  return (i==s.size()) ? "0" : s.substr(i);
}
ll r=0,t=0;
string s;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>s;
  
  for(ll i=0;i<s.size();i++){t+=s[i]-'0';}
  
  if(t%3==0){
    string tmp = clearLeadingZeros(s);
    if(tmp=="0"){
      cout<<tmp;
      return 0;
    }else{
      if(tmp.empty()){
        cout<<"-1";
        return 0;
      }else{
        cout<<tmp;
        return 0;
      }
    }
  }
  
  ll r=t%3;
  
  for(ll i=s.size()-1;i>=0;i--){
    if((s[i]-'0')%3==r){
      string tmp=s;
      tmp.erase(i,1);
      tmp = clearLeadingZeros(tmp);
      if(tmp!="0"||t-(s[i]-'0')==0){
        if(tmp.empty()){
          cout<<-1;return 0;
        }else{
          cout<<tmp;return 0;
        }
      }
    }
  }
  
  ll c=0;
  for(ll i=s.size()-1;i>=0;i--){
    if((s[i]-'0')%3==3-r){
      s.erase(i,1);
      c++;
      i++;
    }
  }

  string tmp = clearLeadingZeros(s);
  if(!s.empty()){cout<<s;}else{cout<<-1;}
}
