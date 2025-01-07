#include"iostream"
#include"string"
#include"map"
using namespace std;
int k;string s;
int main(){
  cin>>k;
  while(k--){
    map<char,int>pos;bool f=false;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(pos[s[i]]==0){
        pos[s[i]]=i+1;
      }else if(pos[s[i]]!=0){pos[s[i]]=-1;}
    }
    for(auto c:pos){
      if(c.second!=0&&c.second!=-1){cout<<c.second<<"\n";f=true;break;}
    }
    if(!f){cout<<"-1\n";}
  }
}