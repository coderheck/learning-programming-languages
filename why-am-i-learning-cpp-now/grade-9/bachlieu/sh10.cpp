#include"iostream"
#include"string"
using namespace std;
string s;int t=0;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>s;
  for(char c:s){t+=c-'0';}
  if(t%9==0){cout<<"Yes";}else{cout<<"No";}
}