#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
string s;ll n,res=0,one=0;
int main(){
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      res=max(res,s[i]-'0'+1);
    }else{
      one++;
      res=max(res,one);
    }
  }
  cout<<res;
}
