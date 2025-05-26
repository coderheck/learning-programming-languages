#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;ll t=0;
int main(){
  if(fopen("sodep.inp","r")){
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
  }
  cin>>s;
  for(ll i=0;i<s.size();i++){t+=s[i]-'0';}
  cout<<(t%s.size()==0);
}