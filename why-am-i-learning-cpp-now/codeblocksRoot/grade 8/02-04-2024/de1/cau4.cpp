#include"bits/stdc++.h"
#define ull unsigned long long
using namespace std;
int main(){
  if(fopen("cau4.inp","r")){
    freopen("cau4.inp","r",stdin);
    freopen("cau4.out","w",stdout);
  }
  string s;char c;getline(cin,s);cin>>c;c=(char)tolower(c);
  for(ull i=0;i<=s.size();i++){s[i]=(char)tolower(s[i]);}
  cout<<count(s.begin(),s.end(),c)<<"\n"<<s;
}
