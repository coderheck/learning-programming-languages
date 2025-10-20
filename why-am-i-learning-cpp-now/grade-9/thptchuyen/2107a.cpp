#include"iostream"
#include"string"
using namespace std;
int n,p=0;char a;
string ans="";
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;ans+=a;
  }
  string binhAns(ans);
  binhAns.erase(0,1);
  for(int i=0;i<binhAns.size();i++){
    if(binhAns[i]==ans[i]){p++;}
  }
  cout<<p;
}