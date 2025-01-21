#include"iostream"
#include"string"
#include"map"
using namespace std;
int n,res=0;string s;
map<char,int>cnt,pos;
int main(){
  cin>>n>>s;
  for(int i=0;i<n;i++){
    /*if(pos[s[i]]==0){
      pos[s[i]]=i+1;
      cnt[s[i]]++;
    }else{*/
      res+=cnt[s[i]];
      cnt[s[i]]++;
    /*}*/
  }
  cout<<res;
}