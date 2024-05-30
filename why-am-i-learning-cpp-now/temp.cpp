#include"iostream"
#include"string"
#include"algorithm"
#define ll long long
using namespace std;
int main(){
  if(fopen("temp.inp","r")){
    freopen("temp.inp","r",stdin);
    //freopen("temp.out","w",stdout);
  }
  string s;char f;ll fcount=0;
  getline(cin,s);cin>>f;
  for(ll i=0;i<s.length();i++){
    if(tolower(s[i])==tolower(f)){fcount++;}
  }
  cout<<fcount<<"\n";
  while(s[0]==' '){s.erase(0,1);}
  cout<<s;
}
