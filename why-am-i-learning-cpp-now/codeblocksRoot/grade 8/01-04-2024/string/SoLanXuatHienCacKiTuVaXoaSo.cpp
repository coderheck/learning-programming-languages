#include"iostream"
#include"string"
#include"algorithm"
#define ull unsigned long long
using namespace std;
int main(){
  string s,res="";cin>>s;
  for(ull i=0;i<s.size();i++){
    ull charcount=1;ull j=i+1;
    while(s[i]==s[j]){charcount++;j++;}
    cout<<(char)s[i]<<" : "<<charcount<<"\n";
    i=j-1;
  }
  for(ull i=0;i<s.size();i++){
    if( ( (int)s[i]>=65 && (int)s[i]<=90 ) || ( (int)s[i]>=97 && (int)s[i]<=122 ) ){res+=(char)s[i];}
  }
  cout<<res;
}
