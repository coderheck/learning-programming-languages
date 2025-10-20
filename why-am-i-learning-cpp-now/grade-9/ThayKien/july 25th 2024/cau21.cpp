#include"iostream"
#include"string"
#define ull unsigned long long
using namespace std;
int main(){
  string s;getline(cin,s);ull c=0;
  for(ull i=0;i<s.size();i++){
    if(
      (tolower(s[i])=='a') &&
      (tolower(s[i+1])>='a' && tolower(s[i+1])<='z')
    ){c++;}
  }
  cout<<c;
}