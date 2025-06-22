#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll k,l=2,c=9,half=1;string res;
int main(){
  cin>>k;
  while(k>c){k-=c,l+=2,c*=10;}
  for(ll i=1;i<l/2;i++){half*=10;}
  half+=k-1;
  res=to_string(half);
  for(ll i=0;i<res.size();i++){cout<<res[i];}
  for(ll i=res.size()-1;i>=0;i--){cout<<res[i];}
}

