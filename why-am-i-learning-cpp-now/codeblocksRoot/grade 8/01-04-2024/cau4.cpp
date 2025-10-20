#include"iostream"
#include"stdio.h"
#include"string"
#define ull unsigned long long
using namespace std;
int ASCIItoInt(char c){
  return (int)c-'0';
}
int main(){
  if(fopen("cau4.inp","r")){
    freopen("cau4.inp","r",stdin);
    freopen("cau4.out","w",stdout);
  }
  string s1,s2,res2="";cin>>s1>>s2;
  for(ull i=0;i<s1.size();i++){
    ull charcount=1;ull j=i+1;
    while(s1[i]==s1[j]){charcount++;j++;}
    cout<<(char)s1[i]<<charcount;
    i=j-1;
  }
  cout<<"\n";
  for(ull i=0;i<s2.size();i++){
    if( (int)s2[i]>=97 && (int)s2[i]<=122 ){
      int cnt=0;int j=i+1;
      while( s2[j]>=48 && s2[j]<=57 ){cnt*=10;cnt+=ASCIItoInt(s2[j]);j++;}
      res2.append(cnt,(char)s2[i]);
      i=j-1;
    }
  }
  cout<<res2;
}
