#include<iostream>
#include<string>
#include<stack>
using namespace std;
#define ll long long
struct p{char a;ll b;};
string s,res;ll n,k;stack<p>st;
int main(){
  if(fopen("xoaxau.inp","r")){
    freopen("xoaxau.inp","r",stdin);
    freopen("xoaxau.out","w",stdout);
  }
  cin>>n>>k;cin>>s;
  for(ll i=0;i<s.size();i++){
    if(!st.empty()&&st.top().a==s[i]){
      st.top().b++;
      if(st.top().b==k){st.pop();}
    }else{
      p add;add.a=s[i];add.b=1;
      st.push(add);
    }
  }
  while(!st.empty()){
    res=string(st.top().b,st.top().a)+res;
    st.pop();
  }
  cout<<res;
}
