#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string s;char ints[1005],c=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){ints[c++]=s[i];}
  }
  if(c==1){cout<<ints[0];return 0;}
  sort(ints,ints+c);
  for(int i=0;i<c;i++){
    if(i+1==c){cout<<ints[i];}else{cout<<ints[i]<<"+";}
  }
}