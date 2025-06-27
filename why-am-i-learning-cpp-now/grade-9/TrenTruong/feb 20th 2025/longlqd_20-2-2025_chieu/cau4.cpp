// incomplete
#include"iostream"
#include"string"
using namespace std;
#define ll long long
string s;ll k,n,c=0;
int main(){
  cin>>s>>k;n=s.size();
  for(int i=1;i<n;i++){if(s[i]==s[i-1]){s[i]='#';c++;}}
  cout<<s<<" "<<c*(k-1)+(c-1);
}