#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s,res="",tmp="";ll k;
void buildRes(){
  for(ll i=0;i<s.size();i++){
    res+=s[i];
    while(tmp.size()<s.size()){tmp+=res;}
    if(tmp==s){return;}
    tmp="";
  }
}
int main(){
  cin>>s;
  buildRes();
  cout<<res;
}
