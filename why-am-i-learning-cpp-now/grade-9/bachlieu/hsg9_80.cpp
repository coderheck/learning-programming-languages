#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s,res="";
int main(){
  cin>>s;
  res.push_back(tolower(s[0]));
  for(ll i=1;i<s.size();i++){
    if(s[i]>='A'&&s[i]<='Z'){
      res+="_";res+=(char)tolower(s[i]);
    }else{
      res+=s[i];
    }
  }
  cout<<res;
}
