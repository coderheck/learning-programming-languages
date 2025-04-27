#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
ll k,c=0,srtc=0,cnt[10],srt[10];string s;
int main(){
  for(ll i=0;i<10;i++){cnt[i]=0;}
  cin>>s>>k;k--;
  for(ll i=0;i<s.size();i++){cnt[s[i]-'0']++;}
  for(ll i=0;i<10;i++){if(cnt[i]){srt[srtc++]=i;}}
  sort(srt,srt+srtc,greater<ll>());
  cout<<srt[k];
}