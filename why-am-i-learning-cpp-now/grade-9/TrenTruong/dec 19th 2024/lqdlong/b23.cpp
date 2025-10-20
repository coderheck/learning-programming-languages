#include"iostream"
#include"string"
#include"unordered_map"
using namespace std;
string s;unordered_map<char,int>cnt;int maxO=0;char res;
int main(){
  getline(cin,s);
  for(char c:s){cnt[c]++;}
  for(auto i:cnt){
    if(i.second>maxO){maxO=i.second;}
  }
  for(int i=0;i<s.size();i++){
    char thisc=s[i];
    if(cnt[s[i]]==maxO){cout<<s[i]<<" "<<cnt[s[i]]<<"\n";}
    while(s[i+1]==thisc){i++;}
  }
}