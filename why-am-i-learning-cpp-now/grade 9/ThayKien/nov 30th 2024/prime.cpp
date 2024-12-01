#include"iostream"
#include"string"
#include"map"
using namespace std;
#define maxP 2500
string s;map<int,int>prcnt;
bool pr[maxP+1];
void prSieve(){
  for(int i=2;i<=maxP;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxP;i++){
    for(int j=i*i;j<=maxP;j+=i){pr[j]=false;}
  }
}
int main(){
  prSieve();
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]>='2'){}
  }
}