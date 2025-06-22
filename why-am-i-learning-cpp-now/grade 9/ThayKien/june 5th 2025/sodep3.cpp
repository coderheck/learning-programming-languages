#include <iostream>
#include <string>
using namespace std;
#define ll long long 
string s;ll n,sum=0;
int main(){
  cin>>s;
  n=s.size();
  for(ll i=0;i<n;i++){sum+=s[i]-'0';}
  if(sum%n==0){cout<<1;}else{cout<<0;}
}
