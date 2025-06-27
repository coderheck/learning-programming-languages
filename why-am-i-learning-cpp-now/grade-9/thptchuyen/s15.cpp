#include"iostream"
#include"string"
using namespace std;
int main(){
  string s;bool f=false;getline(cin,s);
  for(long long i=0;i<s.size();i++){
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='Z')){}else{f=true;}
  }
  if(f){cout<<"YES";}else{cout<<"NO";}
}
