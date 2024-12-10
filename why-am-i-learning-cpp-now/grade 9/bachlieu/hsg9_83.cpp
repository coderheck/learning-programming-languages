#include"iostream"
#include"map"
#include"string"
using namespace std;
string s1,s2;
char cnt1[260],cnt2[260];
int res=0;
int max(int a,int b){return(a>b)?a:b;}
int min(int a,int b){return(a<b)?a:b;}
int main(){
  cin>>s1>>s2;
  for(char d:s1){cnt1[d]++;}
  for(char d:s2){cnt2[d]++;}
  for(char i='a';i<='z';i++){
    if(cnt1[i]>0&&cnt2[i]>0){
      res+=max(cnt1[i],cnt2[i])-min(cnt1[i],cnt2[i]);
    }
  }
  cout<<res;
}