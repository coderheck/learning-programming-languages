#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string IntToASCII(int n){
  stringstream tmp; tmp<<n;
  string ret; tmp>>ret;
  return ret;
}
bool xaudoixung(string s,int n){
  bool dx=true;
  for(int i=0;i<n/2;i++){if(s[i]!=s[n-i-1]){dx=false;}}
  return dx;
}
int main(){
  int n;bool ok=true;cin>>n;string s;
  for(int i=1;i<=n;i++){
    long long x,y;cin>>x>>y;string xy=IntToASCII(x+y);
    s+=xy;
  }
  if(xaudoixung(s,s.length())==true){cout<<"YES";}else{cout<<"NO";}
}
// AC