#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s1,s2;
int main(){
  cin>>s1>>s2;
  for(ll i=0;i<s1.size();i++){
    char c=s1[i];ll cnt=1;
    while(s1[i+1]==c){cnt++;i++;}
    cout<<c<<cnt;
  }
  cout<<"\n";
  for(ll i=0;i<s2.size();i++){
    char c=s2[i];ll cnt=0;
    while(s2[i+1]>='0'&&s2[i+1]<='9'){cnt=cnt*10+s2[i+1]-'0';i++;}
    while(cnt--){cout<<c;}
  }
}
