#include"iostream"
#include"string"
using namespace std;
string s;int n;
void ParseString(){
  for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-i-1]){cout<<"No";return;}
  }
  cout<<"Yes";
}
int main(){
  cin>>s;n=s.size();
  ParseString();
}