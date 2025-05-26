#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
string s1,s2;ll c1[260],c2[260],res=0;
int main(){
  for(ll i=0;i<260;i++){c1[i]=c2[i]=0;}
  getline(cin,s1);getline(cin,s2);
  for(ll i=0;i<s1.size();i++){c1[s1[i]]++;}
  for(ll i=0;i<s2.size();i++){c2[s2[i]]++;}
  for(ll i='a';i<='z';i++){
    res+=max(c1[i],c2[i])-min(c1[i],c2[i]);
  }
  cout<<res;
}
