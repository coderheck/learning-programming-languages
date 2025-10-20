#include"iostream"
#include"algorithm"
using namespace std;
string s,u,l;
int main(){
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]>='a'&&s[i]<='z'){
      l.push_back(s[i]);
    }else if(s[i]>='A'&&s[i]<='Z'){
      u.push_back(s[i]);
    }
  }
  sort(l.begin(),l.end(),greater<char>());
  sort(u.begin(),u.end(),greater<char>());
  cout<<u<<l;
}