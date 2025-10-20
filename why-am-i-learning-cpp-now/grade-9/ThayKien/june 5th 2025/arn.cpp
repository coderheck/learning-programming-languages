#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s,cut;ll res=0,cs,cp;bool g=true;
int main(){
  cin>>s>>cut;
  cs=cut.size();
  for(ll i=0;i<s.size();i++){
    cp=0,g=true;
    while(cp<cs){
      if(!(s[i]==cut[cp])){g=false;break;}
      i++;cp++;
    }
    res+=g;
  }
  cout<<res;
}
