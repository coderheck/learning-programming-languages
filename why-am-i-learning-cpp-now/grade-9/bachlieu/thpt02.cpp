#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;
int main(){
  getline(cin,s);
  for(ll i=0;i<s.size();i++){
    if(s[i]=='#'){s.erase(i-1,2);i-=2;}
  }
  cout<<s;
}
