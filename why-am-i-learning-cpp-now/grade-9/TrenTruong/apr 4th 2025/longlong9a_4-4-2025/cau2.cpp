#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;ll res=0;
int main(){
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      while(s[i+1]>='0'&&s[i+1]<='9'){i++;}
      res++;
    }
  }
  cout<<res;
}