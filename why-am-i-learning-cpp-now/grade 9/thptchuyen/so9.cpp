#include"iostream"
#include"string"
using namespace std;
string a,b;
int chuky[10],ckC=0;
void parseArgs(){
  int a_last=a[a.size()-1]-'0',b_mod=0,cur=a_last;
  if(b=="0"){cout<<1;return;}
  do{
    chuky[ckC++]=cur%10;
    cur=(cur*a_last)%10;
  }while(chuky[0]!=cur);
  for(size_t i=0;i<b.size();i++){
    b_mod=(b_mod*10+(b[i]-'0'))%ckC;
  }
  if(b_mod==0){b_mod=ckC;}
  cout<<chuky[b_mod-1];
}
int main(){
  cin>>a>>b;
  parseArgs();
}