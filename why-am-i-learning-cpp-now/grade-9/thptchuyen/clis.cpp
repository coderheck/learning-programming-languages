#include"iostream"
#include"string"
using namespace std;
string s;int res=1,cur=1,n;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>s;n=s.size();
  for(int i=1;i<n;i++){
    if((int)s[i]>=(int)s[i-1]){cur++;}else{if(res<cur){res=cur;};cur=1;}
  }
  if(res<cur){res=cur;}
  cout<<res;
}