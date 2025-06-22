#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n;string s,res="";umap<char,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>s;
    for(ll i=0;i<s.size();i++){cnt[s[i]]++;}
    for(umap<char,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
      if(i->second==1){res+=i->first;}
    }
    cnt.clear();
  }
  cout<<res;
}
