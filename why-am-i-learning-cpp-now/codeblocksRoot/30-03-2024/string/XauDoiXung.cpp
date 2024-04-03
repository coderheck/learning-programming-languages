#include"iostream"
#include"string"
#include"algorithm"
#define ull unsigned long long
#define kbc main
using namespace std;
bool xdx(string s){
  bool dx=true;ull n=s.length();
  for(ull i=0;i<n/2;i++){if(s[i]!=s[s.length()-i-1]){dx=false;}}
  return dx;
}
int kbc(){
  if(fopen("XauDoiXung.inp","r")){
    freopen("XauDoiXung.inp","r",stdin);
    freopen("XauDoiXung.out","w",stdout);
  }
  string str;getline(cin,str);
  cout<<xdx(str);
}
