#include<iostream>
#include<string>
#include<map>
using namespace std;
string s;map<char,int>cnt;
int main(){
  if(fopen("cntchar.inp","r")){
    freopen("cntchar.inp","r",stdin);
    freopen("cntchar.out","w",stdout);
  }
  cin>>s;
  for(int i=0;i<s.size();i++){cnt[s[i]]++;}
  for(map<char,int>::iterator it=cnt.begin();it!=cnt.end();it++){
    cout<<it->first<<":"<<it->second<<"\n";
  }
}