#include"iostream"
#include"string"
using namespace std;
#define maxN 5000000
string s;int res=0,cur=0;
bool pr[maxN+1];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
void parseString(){
  s.push_back('#');
  for(char c:s){
    if(c>='0'&&c<='9'){
      cur=(cur*10)+(c-'0');
    }else{
      if(pr[cur]&&cur>res){res=cur;}
      cur=0;
    }
  }
  cout<<res;
}
int main(){
  prSieve();
  cin>>s;
  parseString();
}