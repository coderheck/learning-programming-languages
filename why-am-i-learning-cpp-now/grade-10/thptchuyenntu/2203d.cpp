#include <iostream>
#include <string>
using namespace std;
#define ll long long 
const ll maxN=100000;
const ll modN=1000000007;
ll t,pre[maxN+5],suf[maxN+5],p[maxN+5];
string s;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  p[0]=1,pre[0]=0,suf[maxN]=0;
  for(ll i=1;i<=maxN;i++){p[i]=(p[i-1]*26)%modN;}
  cin>>s>>t;
  s="#"+s;
  for(ll i=1;i<s.size();i++){pre[i]=(pre[i-1]*26+s[i]-'a')%modN;}
  for(ll i=s.size()-1;i>0;i--){suf[]}
}
