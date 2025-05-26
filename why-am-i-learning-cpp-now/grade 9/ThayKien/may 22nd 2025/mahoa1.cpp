#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;ll k;
int main(){
  cin>>k>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]-k<'a'){
      s[i]+=26-k;
    }else{
      s[i]-=k;
    }
  }
  cout<<s;
}
