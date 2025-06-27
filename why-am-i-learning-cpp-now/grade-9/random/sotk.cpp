#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;ll k,cnt[10];
int main(){
  for(ll i=0;i<10;i++){cnt[i]=0;}
  cin>>s>>k;
  for(ll i=0;i<s.size();i++){cnt[s[i]-'0']++;}
  for(ll i=9;i>=0;i--){
    if(cnt[i]>0){k--;}
    if(!k){cout<<i;return 0;}
  }
}
