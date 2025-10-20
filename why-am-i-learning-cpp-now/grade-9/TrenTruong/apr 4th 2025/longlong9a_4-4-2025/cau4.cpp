#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll n,c;string s;
ll max(ll &a,ll &b){return(a>b)?a:b;}
int main(){
  cin>>n>>c>>s;
  ll maxL=0,l=0,ac=0,val=0;
  for(ll r=0;r<n;r++){
    if(s[r]=='a'){
      ac++;
    }else if(s[r]=='b'){
      val+=ac;
    }
    while(val>c){
      if(s[l]=='a'){
        ac--;
      }else if(s[l]=='b'){
        val-=ac;
      }
      l++;
      if(l>=n){break;}
    }
    maxL=max(maxL,r-l+1);
  }
  cout<<maxL;
}