#include<iostream>
#include<sstream>
#include<algorithm>
#define ll long long
using namespace std;
string inttoascii(int n){
  stringstream ss;ss<<n;
  return ss.str();
}
int main(){
  if(fopen("bai7.inp","r")){
    freopen("bai7.inp","r",stdin);
    freopen("bai7.out","w",stdout);
  }
  int n,k;string s="";ll d=0;cin>>n>>k;
  for(int i=1;i<=n;i++){string tmp;cin>>tmp;s+=tmp;}
  //for(ll i=0;i<s.size();i++){if((int)s[i]==(int)k[0]){d++;}}
  cout<<count(s.begin(),s.end(),(int)inttoascii(k)[0]);
}
