#include<iostream>
using namespace std;
#define ll long long
string s,res="";ll cnt[260];
int main(){
  for(ll i=0;i<260;i++){cnt[i]=0;}
  cin>>s;
  for(ll i=0;i<s.size();i++){cnt[s[i]]++;}
  for(ll i='Z';i>='A';i--){while(cnt[i]--){res+=(char)i;}}
  for(ll i='z';i>='a';i--){while(cnt[i]--){res+=(char)i;}}
  cout<<res;
}
