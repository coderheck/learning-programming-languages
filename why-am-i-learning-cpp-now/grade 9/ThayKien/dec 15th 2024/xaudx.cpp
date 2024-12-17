#include"iostream"
#include"string"
using namespace std;
#define ll long long
#define elif else if
string s;
void proc(){
  unsigned ll i,j,l;
  i=0;j=l=s.size()-1;l++;
  while(i<j){
    if(s[i]=='?'&&s[j]=='?'){s[i]=s[j]='A';}
    if(s[i]!=s[j]){
      if(s[i]=='?'){
        s[i]=s[j];
      }elif(s[j]=='?'){
        s[j]=s[i];
      }else{cout<<0;return;}
    }
    i++;j--;
  }
  if((l&1)&&(s[(l-1)/2]=='?')){s[(l-1)/2]='A';}
  cout<<s;
}
int main(){
  cin>>s;
  proc();
}