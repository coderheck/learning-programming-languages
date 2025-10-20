#include"iostream"
#include"string"
using namespace std;
bool isVowel(const char &c){
  return(
    c=='A'||c=='a'||
    c=='E'||c=='e'||
    c=='I'||c=='i'||
    c=='O'||c=='o'||
    c=='U'||c=='u'||
    c=='Y'||c=='y'
  );
}
string s,res="";
int main(){
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(!isVowel(s[i])){res+=".";res+=(char)tolower(s[i]);}
  }
  cout<<res;
}