#include"iostream"
#include"string"
#include"algorithm"
#define ull unsigned long long
using namespace std;
int main(){
  string s;cin>>s;ull diffchars=0;
  for(ull i=0;i<s.size();i++){s[i]=toupper((char)s[i]);}
  sort(s.begin(),s.end());
  for(ull i=0;i<s.size();i++){
    diffchars++;ull j=i+1;
    while(s[i]==s[j]){j++;}
    i=j;
  }
  cout<<diffchars;
}
