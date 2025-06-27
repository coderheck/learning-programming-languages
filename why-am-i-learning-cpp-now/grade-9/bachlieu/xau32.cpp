#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
ll n,c=0,co=0,res=0;string s;
int main(){
  cin>>n>>s;
  for(ll i=0;i<n;i++){
    if(s[i]=='C'){
      c++;
    }else if(s[i]=='O'){
      co+=c;
    }else if(s[i]=='W'){
      res+=co;
    }
  }
  cout<<res;
}
