#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
string s,tmp;umap<string,ll>cnt;ll res=0;
int main(){
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      tmp+=s[i];
    }else{
      while(tmp[0]=='0'){tmp.erase(0,1);}
      cnt[tmp]++;
      tmp="";
    }
  }
  if(tmp!=""){
    while(tmp[0]=='0'){tmp.erase(0,1);}
    cnt[tmp]++;
  }
  for(umap<string,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
    res+=(i->second==1);
  }
  cout<<res;
}
