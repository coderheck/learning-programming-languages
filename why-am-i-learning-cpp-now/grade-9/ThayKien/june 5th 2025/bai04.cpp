#include<iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
ll q,f=0;string s;umap<char,ll>cnt;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>q;
  while(q--){
    cin>>s;cnt.clear();f=0;
    for(ll i=0;i<s.size();i++){cnt[s[i]]++;}
    for(ll i=0;i<s.size();i++){
      if(cnt[s[i]]==1){cout<<i+1<<"\n";f=1;break;}
    }
    if(!f){cout<<-1<<"\n";}
  }
}
