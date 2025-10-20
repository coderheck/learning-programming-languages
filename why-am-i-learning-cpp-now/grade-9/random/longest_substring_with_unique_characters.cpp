#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
string s;ll cnt[260],res=0,l=0;
int main(){
  for(ll i=0;i<260;i++){cnt[i]=0;}
  cin>>s;
  for(ll r=0;r<s.size();r++){
    cnt[s[r]]++;
    if(cnt[s[r]]>1){
      while(cnt[s[r]]>1){
        cnt[s[l]]--;
        l++;
      }
    }
    res=max(res,r-l+1);
  }
  cout<<res;
}
