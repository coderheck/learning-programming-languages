#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,t=0;string s,order="";char c,name;
umap<char,char>cnt;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>s;
    name=s[0];c='9'+1;
    for(ll i=1;i<s.size();i++){
      if(s[i]<c){c=s[i];}
    }
    if(!cnt[name]){
      cnt[name]=c;
      t+=c-'0';
      order.push_back(name);
    }else if(cnt[name]>c){
      t+=(c-cnt[name]);
      cnt[name]=c;
    }
  }
  for(ll i=0;i<order.size();i++){
    cout<<order[i]<<cnt[order[i]]<<"\n";
  }
  cout<<t;
}
