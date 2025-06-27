#include"iostream"
#include"string"
using namespace std;
#define ll long long
#define maxN 1000000
string s;int man=-1,n;
bool isvowel(char c){
  return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main(){
  if(fopen("bai21.inp","r")){
    freopen("bai21.inp","r",stdin);
    freopen("bai21.out","w",stdout);
  }
  cin>>n;cin>>s;
  for(int i=0;i<s.size();i++){
    if(isvowel(s[i])){
      int cur=1;
      while(isvowel(s[i+1])){
        i++;cur++;
      }
      if(cur>man){man=cur;}
    }
  }
  cout<<man;
}