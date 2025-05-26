#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s,res;int t=0;
int main(){
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='9'){
      t=(s[i]-'0')*10+s[i+1]-'0';
      i+=1;
    }else{
      t=(s[i]-'0')*100+(s[i+1]-'0')*10+s[i+2]-'0';
      i+=2;
    }
    res.push_back((char)t);
  }
  cout<<res;
}

