#include"iostream"
#include"string"
using namespace std;
string s;bool fl;int n,caps=0;
int main(){
  cin>>s;
  n=s.size();
  fl=(s[0]>='a'&&s[0]<='z');
  if(fl){
    for(int i=1;i<s.size();i++){caps+=(s[i]>='A'&&s[i]<='Z');}
    if(caps==n-1){
      cout<<(char)toupper(s[0]);
      for(int i=1;i<s.size();i++){cout<<(char)tolower(s[i]);}
    }else{
      cout<<s;
    }
  }else{
    for(int i=1;i<s.size();i++){caps+=(s[i]>='A'&&s[i]<='Z');}
    if(caps+1==n){
      cout<<(char)s[0];
      for(int i=1;i<s.size();i++){cout<<(char)tolower(s[i]);}
    }else{
      cout<<s;
    }
  }
}