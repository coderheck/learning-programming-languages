#include<iostream>
#include<string>
using namespace std;
#define ll long long
bool isVowel(const char &c){
  return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
ll n,res=0,tmp=0;string s;
int main(){
  cin>>n>>s;
  for(ll i=0;i<n;i++){
    if(isVowel(s[i])){
      tmp++;
    }else{
      if(res<tmp){res=tmp;}
      tmp=0;
    }
  }
  if(res<tmp){res=tmp;}
  if(!res){cout<<-1;}else{cout<<res;}
}
