#include<iostream>
#include<string>
using namespace std;
#define ll long long
bool isVowel(const char &c){
  return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
ll n,tmp=0,res=0;string s;
int main(){
  cin>>n;cin.ignore();cin>>s;
  for(ll i=0;i<n;i++){
    if(isVowel(s[i])){
      tmp++;
    }else{
      if(tmp>res){res=tmp;}
      tmp=0;
    }
  }
  if(tmp>res){res=tmp;}
  if(!res){res=-1;}
  cout<<res;
}
