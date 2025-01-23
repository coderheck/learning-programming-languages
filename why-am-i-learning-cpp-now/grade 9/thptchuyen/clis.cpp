#include"iostream"
#include"string"
using namespace std;
#define ll long long
string s;ll res=1,cur=1,n;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>s;n=s.size();
  for(ll i=1;i<n;i++){
    if(s[i]>=s[i-1]){cur++;}else{if(res<cur){res=cur;};cur=1;}
  }
  if(res<cur){res=cur;}
  cout<<res;
}