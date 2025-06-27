#include<iostream>
using namespace std;
#define ll long long
string s;ll r=0,t=0;
int main(){
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      t=s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){t=t*10+s[i]-'0';i++;}
      r++;
    }else{
      t=0;
    }
  }
  cout<<r;
}
