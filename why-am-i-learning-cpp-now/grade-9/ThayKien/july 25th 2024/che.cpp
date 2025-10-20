#include"iostream"
#include"string"
using namespace std;
#define ll long long
int main(){
  string s;cin>>s>>s;ll ta=0,tb=0;
  for(char c:s){
    if(c=='A'){ta++;}else{tb++;}
  }
  if(ta<tb){cout<<'<';}else if(ta>tb){cout<<'>';}else{cout<<'=';}
}