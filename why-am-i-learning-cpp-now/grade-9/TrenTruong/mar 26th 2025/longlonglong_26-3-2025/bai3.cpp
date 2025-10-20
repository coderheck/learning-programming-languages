#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
string s;unordered_map<char,ll>pos;
ll resSt=0,maxL=0,st=0,n;
int main(){
  cin>>s;
  n=s.size();
  for(ll ed=0;ed<n;ed++){
    char cur=s[ed];
    if(pos.find(cur)!=pos.end()&&pos[cur]>=st){
      st=pos[cur]+1;
    }
    pos[cur]=ed;
    if(ed-st+1>maxL){maxL=ed-st+1;resSt=st;}
  }
  cout<<resSt+1<<" "<<maxL;
}