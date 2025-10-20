#include"iostream"
#include"string"
#include"algorithm"
using namespace std;
int main(){
  int n,p=0;string ans="";cin>>n;
  for(int i=1;i<=n;i++){char a;cin>>a;ans+=a;}
  string binhAns(ans);
  reverse(binhAns.begin(),binhAns.end());
  binhAns.pop_back();
  reverse(binhAns.begin(),binhAns.end());
  for(int i=0;i<binhAns.size();i++){
    if(binhAns[i]==ans[i]){p++;}
  }
  cout<<p;
}
