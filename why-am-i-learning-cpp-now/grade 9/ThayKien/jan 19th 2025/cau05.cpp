#include"iostream"
#include"string"
using namespace std;
#define maxP 5000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
string s;int res=0;
void proc(){
  int cur=0;
  for(int i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      cur=cur*10+(s[i]-'0');
    }else{
      if(!pr[cur]&&cur>res){res=cur;}
      cur=0;
    }
  }
  if(!pr[cur]&&cur>res){res=cur;}
  cout<<res;
}
int main(){
  prSieve();
  cin>>s;
  proc();
}