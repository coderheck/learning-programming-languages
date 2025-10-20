#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll n,minP=0;string s;char lo,name;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>s;
    name=s[0];lo='9'+1;
    for(ll i=1;i<s.size();i++){
      if(s[i]<lo){lo=s[i];}
    }
    cout<<name<<lo<<"\n";minP+=lo-'0';
  }
  cout<<minP;
}
